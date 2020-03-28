namespace ChatBot
{
	partial class ChatBotSunny
	{
		/// <summary>
		/// Required designer variable.
		/// </summary>
		private System.ComponentModel.IContainer components = null;

		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		/// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
		protected override void Dispose(bool disposing)
		{
			if (disposing && (components != null))
			{
				components.Dispose();
			}
			base.Dispose(disposing);
		}

		#region Windows Form Designer generated code

		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		private void InitializeComponent()
		{
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(ChatBotSunny));
            this.QuestionTextBox = new System.Windows.Forms.TextBox();
            this.click = new System.Windows.Forms.Button();
            this.MessagesTextBox = new System.Windows.Forms.RichTextBox();
            this.menuStrip1 = new System.Windows.Forms.MenuStrip();
            this.менюToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.сохранитьИсториюБотаToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.загрузитьИсториюБотаToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.возможностиБотаToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.очиститьЧатToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.pictureBox1 = new System.Windows.Forms.PictureBox();
            this.menuStrip1.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).BeginInit();
            this.SuspendLayout();
            // 
            // QuestionTextBox
            // 
            this.QuestionTextBox.Location = new System.Drawing.Point(79, 519);
            this.QuestionTextBox.Margin = new System.Windows.Forms.Padding(4, 4, 4, 4);
            this.QuestionTextBox.Name = "QuestionTextBox";
            this.QuestionTextBox.Size = new System.Drawing.Size(405, 22);
            this.QuestionTextBox.TabIndex = 1;
            this.QuestionTextBox.KeyDown += new System.Windows.Forms.KeyEventHandler(this.QuestionTextBox_KeyDown);
            // 
            // click
            // 
            this.click.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.click.ForeColor = System.Drawing.Color.Green;
            this.click.Location = new System.Drawing.Point(492, 507);
            this.click.Margin = new System.Windows.Forms.Padding(4, 4, 4, 4);
            this.click.Name = "click";
            this.click.Size = new System.Drawing.Size(136, 45);
            this.click.TabIndex = 2;
            this.click.Text = "отправить";
            this.click.UseVisualStyleBackColor = true;
            this.click.Click += new System.EventHandler(this.Key_Click);
            // 
            // MessagesTextBox
            // 
            this.MessagesTextBox.Anchor = ((System.Windows.Forms.AnchorStyles)((((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.MessagesTextBox.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.MessagesTextBox.Location = new System.Drawing.Point(79, 84);
            this.MessagesTextBox.Margin = new System.Windows.Forms.Padding(4, 4, 4, 4);
            this.MessagesTextBox.Name = "MessagesTextBox";
            this.MessagesTextBox.ScrollBars = System.Windows.Forms.RichTextBoxScrollBars.Vertical;
            this.MessagesTextBox.Size = new System.Drawing.Size(405, 413);
            this.MessagesTextBox.TabIndex = 9;
            this.MessagesTextBox.Text = "";
            // 
            // menuStrip1
            // 
            this.menuStrip1.ImageScalingSize = new System.Drawing.Size(20, 20);
            this.menuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.менюToolStripMenuItem});
            this.menuStrip1.Location = new System.Drawing.Point(0, 0);
            this.menuStrip1.Name = "menuStrip1";
            this.menuStrip1.Size = new System.Drawing.Size(683, 28);
            this.menuStrip1.TabIndex = 10;
            this.menuStrip1.Text = "menuStrip1";
            // 
            // менюToolStripMenuItem
            // 
            this.менюToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.сохранитьИсториюБотаToolStripMenuItem,
            this.загрузитьИсториюБотаToolStripMenuItem,
            this.возможностиБотаToolStripMenuItem,
            this.очиститьЧатToolStripMenuItem});
            this.менюToolStripMenuItem.Name = "менюToolStripMenuItem";
            this.менюToolStripMenuItem.Size = new System.Drawing.Size(65, 24);
            this.менюToolStripMenuItem.Text = "Меню";
            // 
            // сохранитьИсториюБотаToolStripMenuItem
            // 
            this.сохранитьИсториюБотаToolStripMenuItem.Name = "сохранитьИсториюБотаToolStripMenuItem";
            this.сохранитьИсториюБотаToolStripMenuItem.Size = new System.Drawing.Size(231, 26);
            this.сохранитьИсториюБотаToolStripMenuItem.Text = "Сохранить историю";
            this.сохранитьИсториюБотаToolStripMenuItem.Click += new System.EventHandler(this.SaveBotToolStripMenuItem_Click);
            // 
            // загрузитьИсториюБотаToolStripMenuItem
            // 
            this.загрузитьИсториюБотаToolStripMenuItem.Name = "загрузитьИсториюБотаToolStripMenuItem";
            this.загрузитьИсториюБотаToolStripMenuItem.Size = new System.Drawing.Size(231, 26);
            this.загрузитьИсториюБотаToolStripMenuItem.Text = "Загрузить историю";
            this.загрузитьИсториюБотаToolStripMenuItem.Click += new System.EventHandler(this.DownloadBotToolStripMenuItem_Click);
            // 
            // возможностиБотаToolStripMenuItem
            // 
            this.возможностиБотаToolStripMenuItem.Name = "возможностиБотаToolStripMenuItem";
            this.возможностиБотаToolStripMenuItem.Size = new System.Drawing.Size(231, 26);
            this.возможностиБотаToolStripMenuItem.Text = "Возможности бота";
            this.возможностиБотаToolStripMenuItem.Click += new System.EventHandler(this.OpportuntitiesBotToolStripMenuItem_Click);
            // 
            // очиститьЧатToolStripMenuItem
            // 
            this.очиститьЧатToolStripMenuItem.Name = "очиститьЧатToolStripMenuItem";
            this.очиститьЧатToolStripMenuItem.Size = new System.Drawing.Size(231, 26);
            this.очиститьЧатToolStripMenuItem.Text = "Очистить чат";
            this.очиститьЧатToolStripMenuItem.Click += new System.EventHandler(this.ClearChatToolStripMenuItem_Click);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.Location = new System.Drawing.Point(156, 34);
            this.label1.Margin = new System.Windows.Forms.Padding(4, 0, 4, 0);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(110, 29);
            this.label1.TabIndex = 11;
            this.label1.Text = "Чат-бот";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.label2.ForeColor = System.Drawing.Color.Yellow;
            this.label2.Location = new System.Drawing.Point(260, 34);
            this.label2.Margin = new System.Windows.Forms.Padding(4, 0, 4, 0);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(84, 29);
            this.label2.TabIndex = 12;
            this.label2.Text = "Sunny";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.label3.Location = new System.Drawing.Point(343, 34);
            this.label3.Margin = new System.Windows.Forms.Padding(4, 0, 4, 0);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(61, 29);
            this.label3.TabIndex = 13;
            this.label3.Text = "-Bot";
            // 
            // pictureBox1
            // 
            this.pictureBox1.Image = ((System.Drawing.Image)(resources.GetObject("pictureBox1.Image")));
            this.pictureBox1.Location = new System.Drawing.Point(389, 15);
            this.pictureBox1.Margin = new System.Windows.Forms.Padding(4, 4, 4, 4);
            this.pictureBox1.Name = "pictureBox1";
            this.pictureBox1.Size = new System.Drawing.Size(307, 334);
            this.pictureBox1.TabIndex = 14;
            this.pictureBox1.TabStop = false;
            // 
            // ChatBotSunny
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.LightPink;
            this.ClientSize = new System.Drawing.Size(683, 554);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.menuStrip1);
            this.Controls.Add(this.MessagesTextBox);
            this.Controls.Add(this.click);
            this.Controls.Add(this.QuestionTextBox);
            this.Controls.Add(this.pictureBox1);
            this.ForeColor = System.Drawing.SystemColors.ControlText;
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.Margin = new System.Windows.Forms.Padding(4, 4, 4, 4);
            this.MaximumSize = new System.Drawing.Size(701, 601);
            this.MinimumSize = new System.Drawing.Size(701, 601);
            this.Name = "ChatBotSunny";
            this.Text = "Chat-Bot Sunny";
            this.menuStrip1.ResumeLayout(false);
            this.menuStrip1.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

		}

		#endregion
		private System.Windows.Forms.TextBox QuestionTextBox;
		private System.Windows.Forms.Button click;
		private System.Windows.Forms.RichTextBox MessagesTextBox;
		private System.Windows.Forms.MenuStrip menuStrip1;
		private System.Windows.Forms.ToolStripMenuItem менюToolStripMenuItem;
		private System.Windows.Forms.ToolStripMenuItem сохранитьИсториюБотаToolStripMenuItem;
		private System.Windows.Forms.ToolStripMenuItem загрузитьИсториюБотаToolStripMenuItem;
		private System.Windows.Forms.ToolStripMenuItem очиститьЧатToolStripMenuItem;
		private System.Windows.Forms.Label label1;
		private System.Windows.Forms.Label label2;
		private System.Windows.Forms.Label label3;
		private System.Windows.Forms.ToolStripMenuItem возможностиБотаToolStripMenuItem;
		private System.Windows.Forms.PictureBox pictureBox1;
	}
}