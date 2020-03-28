using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace ChatBot
{
	public partial class Skills : Form
	{
		public Skills()
		{
			InitializeComponent();
		}

		private void GorItBtn_Click(object sender, EventArgs e)
		{
			ChatBotSunny form2 = new ChatBotSunny();
			form2.Show();
			Hide();
		}
	}
}
