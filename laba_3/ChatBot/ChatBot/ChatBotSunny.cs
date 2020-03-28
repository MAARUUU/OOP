using System;
using System.Drawing;
using System.IO;
using System.Windows.Forms;

namespace ChatBot
{
	public partial class ChatBotSunny : Form
	{
		Controllers bot = new Controllers();

		public ChatBotSunny()
		{
			InitializeComponent(); //инициализация  формы
		}

		private void RenderMsg(string msg)
		{
			PrintRBot();
			MessagesTextBox.AppendText(msg + "\r\n\r\n");
			MessagesTextBox.ScrollToCaret(); //позволяет прокрутить окно чата до конца
			QuestionTextBox.Clear();
		}
		
		public void Key_Click(object sender, EventArgs e)
		{
            if (QuestionTextBox.Text != "")
			{
				ShowUserMessage();
				var answer = bot.getAnswer(QuestionTextBox.Text);
				RenderMsg(answer);
			}
			else
	            RenderMsg("Вы пытаетесь отправить пустое сообщение. Вам не ответят.");
		}
		
		//метод, отобращающий пользовательское сообщение
		private void ShowUserMessage()
		{
			DateTime date = DateTime.Now;
			string str = Data.Text;
			string outputPlayer = date.ToString("[dd/MM/yyyy HH:mm:ss] ") + str + ": " ;

			var startOfSelection = MessagesTextBox.TextLength;
			MessagesTextBox.AppendText(outputPlayer);
			MessagesTextBox.Select(startOfSelection, outputPlayer.Length);
			MessagesTextBox.SelectionColor = Color.Green;
			MessagesTextBox.AppendText(QuestionTextBox.Text + "\r\n\r\n");
		}
		
		//метод, распечатывающий имя бота синим цветом перед сообщением
		private void PrintRBot()
		{
			DateTime date = DateTime.Now;
			string outputSunny = date.ToString("[dd/MM/yyyy HH:mm:ss] ") + "Лучик: ";
			var startOfSelection = MessagesTextBox.TextLength;
			MessagesTextBox.AppendText(outputSunny);
			MessagesTextBox.Select(startOfSelection, outputSunny.Length);
			MessagesTextBox.SelectionColor = Color.Blue;
		}

		//обработчик пункта меню "Очистить чат"
		private void ClearChatToolStripMenuItem_Click(object sender, EventArgs e)
		{
			MessagesTextBox.Clear();
		}

        //сохранить историю
		private void SaveBotToolStripMenuItem_Click(object sender, EventArgs e)
		{
			SaveFileDialog saveFileDialog1 = new SaveFileDialog();
			saveFileDialog1.Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
			saveFileDialog1.FilterIndex = 2;
			saveFileDialog1.RestoreDirectory = true;
			
			if (saveFileDialog1.ShowDialog() == DialogResult.OK)
				File.WriteAllText(saveFileDialog1.FileName, MessagesTextBox.Text);
		}
		
        // ЗАГРУЗИТЬ ИСТОРИЮ БОТА
		private void DownloadBotToolStripMenuItem_Click(object sender, EventArgs e)
		{
			try
			{
				using (OpenFileDialog ofd = new OpenFileDialog() { Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*", Multiselect = false, ValidateNames = true })
				{
					if (ofd.ShowDialog() == DialogResult.OK)
					{
						string filename = ofd.FileName;
						string file = System.IO.File.ReadAllText(filename);
						MessagesTextBox.Text = file;
					}
					else
					{
						MessagesTextBox.AppendText("Не удалось загрузить историю");
				    }
				}
			}
			catch (Exception ex)
			{
				MessageBox.Show(ex.Message, "Message", MessageBoxButtons.OK, MessageBoxIcon.Error);
			}
		}
		
        // возможности бота
		private void OpportuntitiesBotToolStripMenuItem_Click(object sender, EventArgs e)
		{
			Skills skillsWindow = new Skills();

			skillsWindow.Show();
			this.Hide();
		}

		private void QuestionTextBox_KeyDown(object sender, KeyEventArgs e)
		{
			if (e.KeyCode == Keys.Enter) Key_Click(sender, e);
		}
	}
}
