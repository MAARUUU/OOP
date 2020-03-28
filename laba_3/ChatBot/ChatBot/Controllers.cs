using System;
using System.Collections.Generic;
using System.IO;
using System.Windows.Forms;
using System.Xml.Serialization;
using Regul;

namespace ChatBot
{
    public class Controllers
    {
        //база вопрос-ответ
        private List<QuestionWithAnswers> QuestionsList;
        //найденные индексы вопроса и ответа в базе
        int CurrentQuestionIndex = -1,
            CurrentAnswerIndex = -1;

        public Controllers()
        {
            //поток для чтения базы вопрос-ответ
            FileStream fs = null;
            try
            {
                // открываем поток
                fs = new FileStream("base.xml", FileMode.OpenOrCreate);
                //объявляем сериализатор
                XmlSerializer serializer = new XmlSerializer(typeof(List<QuestionWithAnswers>));
                //извлекаем данные из файла
                QuestionsList = (List<QuestionWithAnswers>)serializer.Deserialize(fs);
            }
            catch
            {
                MessageBox.Show("Не удалось прочитать базу вопрос-ответ.");
                QuestionsList = new List<QuestionWithAnswers>();
            }
            finally
            {
                fs?.Close(); //null propagation
            }
        }
        
        public string getAnswer(string msg)
        {
            msg = msg.ToLower();
            if (msg.Contains("погода") || msg.Contains("новости") || msg.Contains("курс") || msg.Contains("что такое"))
            {
                SearchMsg(msg);
                return $"Открываю поиск по запросу '{msg}'";
            }
            if (msg.Contains("который час")) return DateTime.Now.ToString("HH:mm");
            if (msg.Contains("какой сейчас год")) return DateTime.Now.ToString("yyyy");
            if (msg.Contains("какое сегодня число")) return DateTime.Now.ToString("dd");
            if (msg.Contains("реши"))
            {
                var calc = new Calculator();
                char[] sum = { };
                var res = msg.Split(sum, StringSplitOptions.RemoveEmptyEntries);
                return calc.Calculate(res[1]).ToString();
            }
            
            //ищем сообщение пользователя в базе
            FindCurrentQuestionIndex(msg);

            if (CurrentQuestionIndex != -1)
            {
                var rand = new Random();
                //берем случайный ответ из списка ответов
                CurrentAnswerIndex = rand.Next(QuestionsList[CurrentQuestionIndex].Answers.Count);
                return QuestionsList[CurrentQuestionIndex].Answers[CurrentAnswerIndex];
            }
            return "Я тебя не понимаю";
        }
        private void SearchMsg(string msg)
        {
            System.Diagnostics.Process.Start("https://yandex.ru/search/?text=" + msg);
        }
        
        private void FindCurrentQuestionIndex(string msg)
        {
            CurrentQuestionIndex = -1;

            for (int i = 0; i < QuestionsList.Count; i++)
                if (QuestionsList[i].Question.Contains(msg))
                {
                    CurrentQuestionIndex = i;
                    break;
                }
        }
    }
}