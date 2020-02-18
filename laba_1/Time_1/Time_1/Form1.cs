using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Time_1
{
	public partial class Form1 : Form
	{
		Time q = new Time();
		Time kok = new Time();
		string s;
		int hours,minutes,seconds,chislo;
		int s1, m1, h1;

		public Form1()
		{
			InitializeComponent();
		}

		private void button6_Click(object sender, EventArgs e)
		{
			to_str.Text=q.To_Str();
		}

		private void too_min_Click(object sender, EventArgs e)
		{
			to_minutes.Text = Convert.ToString(Math.Round(q.To_minutes(),2));
		}

		private void too_hour_Click(object sender, EventArgs e)
		{
			to_hours.Text = Convert.ToString(Math.Round(q.To_hours(),2));
		}

		private void add_sec_Click(object sender, EventArgs e)
		{
			q.Add_seconds(chislo);
			to_str.Text = q.To_Str();
		}

		private void add_min_Click(object sender, EventArgs e)
		{
			q.Add_minutes(chislo);
			to_str.Text = q.To_Str();
		}

		private void add_hour_Click(object sender, EventArgs e)
		{
			q.Add_hours(chislo);
			to_str.Text = q.To_Str();
		}

		private void hours_11_TextChanged(object sender, EventArgs e)
		{
			s = hours_11.Text;
			h1 = Convert.ToInt32(s);
			kok.Set_hours(h1);
		}

		private void minutes_22_TextChanged(object sender, EventArgs e)
		{
			s = minutes_22.Text;
			m1 = Convert.ToInt32(s);
			kok.Set_minutes(m1);
		}

		private void seconds_22_TextChanged(object sender, EventArgs e)
		{
			s = seconds_22.Text;
			s1 = Convert.ToInt32(s);
			kok.Set_seconds(s1);
		}

		private void sum_Click(object sender, EventArgs e)
		{
			Time sum = new Time();
			sum = q + kok;
			to_str.Text = sum.To_Str();
		}

		private void sub_Click(object sender, EventArgs e)
		{
			Time sub = new Time();
			sub = q - kok;
			to_str.Text = sub.To_Str();
		}


		private void add_chislo_TextChanged(object sender, EventArgs e)
		{
			s = add_chislo.Text;
			chislo = Convert.ToInt32(s);
		}

		private void too_second_Click(object sender, EventArgs e)
		{
			to_seconds.Text= Convert.ToString(Math.Round(q.To_seconds(),2));
		}

		private void textBox1_TextChanged(object sender, EventArgs e)
		{
			s = s_sec.Text;
			seconds= Convert.ToInt32(s);
			q.Set_seconds(seconds);
		}

	
		private void hours_TextChanged(object sender, EventArgs e)
		{
			s = h_hours.Text;
			hours= Convert.ToInt32(s);
			q.Set_hours(hours);
		}

		private void textBox2_TextChanged(object sender, EventArgs e)
		{
			s = m_min.Text;
			minutes = Convert.ToInt32(s);
			q.Set_minutes(minutes);
		}

		
	}
}
