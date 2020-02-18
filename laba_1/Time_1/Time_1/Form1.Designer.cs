namespace Time_1
{
	partial class Form1
	{
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		private System.ComponentModel.IContainer components = null;

		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		/// <param name="disposing">истинно, если управляемый ресурс должен быть удален; иначе ложно.</param>
		protected override void Dispose(bool disposing)
		{
			if (disposing && (components != null))
			{
				components.Dispose();
			}
			base.Dispose(disposing);
		}

		#region Код, автоматически созданный конструктором форм Windows

		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		private void InitializeComponent()
		{
			System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form1));
			this.label1 = new System.Windows.Forms.Label();
			this.s_sec = new System.Windows.Forms.TextBox();
			this.m_min = new System.Windows.Forms.TextBox();
			this.h_hours = new System.Windows.Forms.TextBox();
			this.hours_11 = new System.Windows.Forms.TextBox();
			this.minutes_22 = new System.Windows.Forms.TextBox();
			this.seconds_22 = new System.Windows.Forms.TextBox();
			this.label2 = new System.Windows.Forms.Label();
			this.label3 = new System.Windows.Forms.Label();
			this.label4 = new System.Windows.Forms.Label();
			this.label5 = new System.Windows.Forms.Label();
			this.label6 = new System.Windows.Forms.Label();
			this.to_str = new System.Windows.Forms.Label();
			this.sum = new System.Windows.Forms.Button();
			this.sub = new System.Windows.Forms.Button();
			this.too_second = new System.Windows.Forms.Button();
			this.too_min = new System.Windows.Forms.Button();
			this.too_hour = new System.Windows.Forms.Button();
			this.button6 = new System.Windows.Forms.Button();
			this.to_seconds = new System.Windows.Forms.Label();
			this.to_minutes = new System.Windows.Forms.Label();
			this.to_hours = new System.Windows.Forms.Label();
			this.add_chislo = new System.Windows.Forms.TextBox();
			this.add_sec = new System.Windows.Forms.Button();
			this.add_min = new System.Windows.Forms.Button();
			this.add_hour = new System.Windows.Forms.Button();
			this.SuspendLayout();
			// 
			// label1
			// 
			this.label1.AutoSize = true;
			this.label1.Location = new System.Drawing.Point(102, 61);
			this.label1.Name = "label1";
			this.label1.Size = new System.Drawing.Size(35, 13);
			this.label1.TabIndex = 0;
			this.label1.Text = "Часы";
			// 
			// s_sec
			// 
			this.s_sec.Location = new System.Drawing.Point(306, 75);
			this.s_sec.Name = "s_sec";
			this.s_sec.Size = new System.Drawing.Size(86, 20);
			this.s_sec.TabIndex = 1;
			this.s_sec.TextChanged += new System.EventHandler(this.textBox1_TextChanged);
			// 
			// m_min
			// 
			this.m_min.Location = new System.Drawing.Point(191, 77);
			this.m_min.Name = "m_min";
			this.m_min.Size = new System.Drawing.Size(86, 20);
			this.m_min.TabIndex = 2;
			this.m_min.TextChanged += new System.EventHandler(this.textBox2_TextChanged);
			// 
			// h_hours
			// 
			this.h_hours.Location = new System.Drawing.Point(80, 78);
			this.h_hours.Name = "h_hours";
			this.h_hours.Size = new System.Drawing.Size(86, 20);
			this.h_hours.TabIndex = 3;
			this.h_hours.TextChanged += new System.EventHandler(this.hours_TextChanged);
			// 
			// hours_11
			// 
			this.hours_11.Location = new System.Drawing.Point(80, 168);
			this.hours_11.Name = "hours_11";
			this.hours_11.Size = new System.Drawing.Size(86, 20);
			this.hours_11.TabIndex = 4;
			this.hours_11.TextChanged += new System.EventHandler(this.hours_11_TextChanged);
			// 
			// minutes_22
			// 
			this.minutes_22.Location = new System.Drawing.Point(191, 168);
			this.minutes_22.Name = "minutes_22";
			this.minutes_22.Size = new System.Drawing.Size(86, 20);
			this.minutes_22.TabIndex = 5;
			this.minutes_22.TextChanged += new System.EventHandler(this.minutes_22_TextChanged);
			// 
			// seconds_22
			// 
			this.seconds_22.Location = new System.Drawing.Point(306, 168);
			this.seconds_22.Name = "seconds_22";
			this.seconds_22.Size = new System.Drawing.Size(86, 20);
			this.seconds_22.TabIndex = 6;
			this.seconds_22.TextChanged += new System.EventHandler(this.seconds_22_TextChanged);
			// 
			// label2
			// 
			this.label2.AutoSize = true;
			this.label2.Location = new System.Drawing.Point(102, 147);
			this.label2.Name = "label2";
			this.label2.Size = new System.Drawing.Size(35, 13);
			this.label2.TabIndex = 7;
			this.label2.Text = "Часы";
			// 
			// label3
			// 
			this.label3.AutoSize = true;
			this.label3.Location = new System.Drawing.Point(210, 144);
			this.label3.Name = "label3";
			this.label3.Size = new System.Drawing.Size(46, 13);
			this.label3.TabIndex = 8;
			this.label3.Text = "Минуты";
			// 
			// label4
			// 
			this.label4.AutoSize = true;
			this.label4.Location = new System.Drawing.Point(319, 144);
			this.label4.Name = "label4";
			this.label4.Size = new System.Drawing.Size(51, 13);
			this.label4.TabIndex = 9;
			this.label4.Text = "Секунды";
			// 
			// label5
			// 
			this.label5.AutoSize = true;
			this.label5.Location = new System.Drawing.Point(210, 61);
			this.label5.Name = "label5";
			this.label5.Size = new System.Drawing.Size(46, 13);
			this.label5.TabIndex = 10;
			this.label5.Text = "Минуты";
			// 
			// label6
			// 
			this.label6.AutoSize = true;
			this.label6.Location = new System.Drawing.Point(319, 59);
			this.label6.Name = "label6";
			this.label6.Size = new System.Drawing.Size(51, 13);
			this.label6.TabIndex = 11;
			this.label6.Text = "Секунды";
			// 
			// to_str
			// 
			this.to_str.AutoSize = true;
			this.to_str.Font = new System.Drawing.Font("MS Reference Sans Serif", 24F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point, ((byte)(204)));
			this.to_str.Location = new System.Drawing.Point(89, 9);
			this.to_str.MaximumSize = new System.Drawing.Size(66, 82);
			this.to_str.MinimumSize = new System.Drawing.Size(250, 22);
			this.to_str.Name = "to_str";
			this.to_str.Size = new System.Drawing.Size(250, 40);
			this.to_str.TabIndex = 12;
			this.to_str.Text = "0:0:0";
			this.to_str.TextAlign = System.Drawing.ContentAlignment.TopCenter;
			// 
			// sum
			// 
			this.sum.Location = new System.Drawing.Point(1, 105);
			this.sum.Name = "sum";
			this.sum.Size = new System.Drawing.Size(75, 23);
			this.sum.TabIndex = 17;
			this.sum.Text = "+";
			this.sum.UseVisualStyleBackColor = true;
			this.sum.Click += new System.EventHandler(this.sum_Click);
			// 
			// sub
			// 
			this.sub.Location = new System.Drawing.Point(1, 134);
			this.sub.Name = "sub";
			this.sub.Size = new System.Drawing.Size(75, 23);
			this.sub.TabIndex = 18;
			this.sub.Text = "-";
			this.sub.UseVisualStyleBackColor = true;
			this.sub.Click += new System.EventHandler(this.sub_Click);
			// 
			// too_second
			// 
			this.too_second.Location = new System.Drawing.Point(16, 237);
			this.too_second.Name = "too_second";
			this.too_second.Size = new System.Drawing.Size(121, 42);
			this.too_second.TabIndex = 19;
			this.too_second.Text = "перевод в секунды";
			this.too_second.UseVisualStyleBackColor = true;
			this.too_second.Click += new System.EventHandler(this.too_second_Click);
			// 
			// too_min
			// 
			this.too_min.Location = new System.Drawing.Point(16, 285);
			this.too_min.Name = "too_min";
			this.too_min.Size = new System.Drawing.Size(121, 42);
			this.too_min.TabIndex = 20;
			this.too_min.Text = "перевод в минуты";
			this.too_min.UseVisualStyleBackColor = true;
			this.too_min.Click += new System.EventHandler(this.too_min_Click);
			// 
			// too_hour
			// 
			this.too_hour.Location = new System.Drawing.Point(16, 333);
			this.too_hour.Name = "too_hour";
			this.too_hour.Size = new System.Drawing.Size(121, 42);
			this.too_hour.TabIndex = 21;
			this.too_hour.Text = "перевод в часы";
			this.too_hour.UseVisualStyleBackColor = true;
			this.too_hour.Click += new System.EventHandler(this.too_hour_Click);
			// 
			// button6
			// 
			this.button6.Font = new System.Drawing.Font("Arial Black", 9F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point, ((byte)(204)));
			this.button6.Location = new System.Drawing.Point(427, 59);
			this.button6.Name = "button6";
			this.button6.Size = new System.Drawing.Size(105, 36);
			this.button6.TabIndex = 22;
			this.button6.Text = "PRINT";
			this.button6.UseVisualStyleBackColor = true;
			this.button6.Click += new System.EventHandler(this.button6_Click);
			// 
			// to_seconds
			// 
			this.to_seconds.AutoSize = true;
			this.to_seconds.Font = new System.Drawing.Font("Century", 14.25F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point, ((byte)(204)));
			this.to_seconds.Location = new System.Drawing.Point(173, 256);
			this.to_seconds.MinimumSize = new System.Drawing.Size(60, 3);
			this.to_seconds.Name = "to_seconds";
			this.to_seconds.Size = new System.Drawing.Size(60, 23);
			this.to_seconds.TabIndex = 23;
			this.to_seconds.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
			// 
			// to_minutes
			// 
			this.to_minutes.AutoSize = true;
			this.to_minutes.Font = new System.Drawing.Font("Century", 14.25F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point, ((byte)(204)));
			this.to_minutes.Location = new System.Drawing.Point(173, 302);
			this.to_minutes.MinimumSize = new System.Drawing.Size(60, 3);
			this.to_minutes.Name = "to_minutes";
			this.to_minutes.Size = new System.Drawing.Size(60, 23);
			this.to_minutes.TabIndex = 24;
			// 
			// to_hours
			// 
			this.to_hours.AutoSize = true;
			this.to_hours.Font = new System.Drawing.Font("Century", 14.25F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point, ((byte)(204)));
			this.to_hours.Location = new System.Drawing.Point(173, 352);
			this.to_hours.Name = "to_hours";
			this.to_hours.Size = new System.Drawing.Size(0, 23);
			this.to_hours.TabIndex = 25;
			// 
			// add_chislo
			// 
			this.add_chislo.Location = new System.Drawing.Point(340, 261);
			this.add_chislo.Name = "add_chislo";
			this.add_chislo.Size = new System.Drawing.Size(100, 20);
			this.add_chislo.TabIndex = 26;
			this.add_chislo.TextAlign = System.Windows.Forms.HorizontalAlignment.Right;
			this.add_chislo.TextChanged += new System.EventHandler(this.add_chislo_TextChanged);
			// 
			// add_sec
			// 
			this.add_sec.Location = new System.Drawing.Point(340, 295);
			this.add_sec.Name = "add_sec";
			this.add_sec.Size = new System.Drawing.Size(113, 23);
			this.add_sec.TabIndex = 27;
			this.add_sec.Text = "добавить секунды";
			this.add_sec.UseVisualStyleBackColor = true;
			this.add_sec.Click += new System.EventHandler(this.add_sec_Click);
			// 
			// add_min
			// 
			this.add_min.Location = new System.Drawing.Point(340, 324);
			this.add_min.Name = "add_min";
			this.add_min.Size = new System.Drawing.Size(113, 23);
			this.add_min.TabIndex = 28;
			this.add_min.Text = "добавить минуты";
			this.add_min.UseVisualStyleBackColor = true;
			this.add_min.Click += new System.EventHandler(this.add_min_Click);
			// 
			// add_hour
			// 
			this.add_hour.Location = new System.Drawing.Point(340, 355);
			this.add_hour.Name = "add_hour";
			this.add_hour.Size = new System.Drawing.Size(113, 23);
			this.add_hour.TabIndex = 29;
			this.add_hour.Text = "добавить часы";
			this.add_hour.UseVisualStyleBackColor = true;
			this.add_hour.Click += new System.EventHandler(this.add_hour_Click);
			// 
			// Form1
			// 
			this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
			this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
			this.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(192)))), ((int)(((byte)(255)))), ((int)(((byte)(192)))));
			this.ClientSize = new System.Drawing.Size(544, 422);
			this.Controls.Add(this.add_hour);
			this.Controls.Add(this.add_min);
			this.Controls.Add(this.add_sec);
			this.Controls.Add(this.add_chislo);
			this.Controls.Add(this.to_hours);
			this.Controls.Add(this.to_minutes);
			this.Controls.Add(this.to_seconds);
			this.Controls.Add(this.button6);
			this.Controls.Add(this.too_hour);
			this.Controls.Add(this.too_min);
			this.Controls.Add(this.too_second);
			this.Controls.Add(this.sub);
			this.Controls.Add(this.sum);
			this.Controls.Add(this.to_str);
			this.Controls.Add(this.label6);
			this.Controls.Add(this.label5);
			this.Controls.Add(this.label4);
			this.Controls.Add(this.label3);
			this.Controls.Add(this.label2);
			this.Controls.Add(this.seconds_22);
			this.Controls.Add(this.minutes_22);
			this.Controls.Add(this.hours_11);
			this.Controls.Add(this.h_hours);
			this.Controls.Add(this.m_min);
			this.Controls.Add(this.s_sec);
			this.Controls.Add(this.label1);
			this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
			this.MaximumSize = new System.Drawing.Size(560, 460);
			this.MinimumSize = new System.Drawing.Size(560, 460);
			this.Name = "Form1";
			this.Text = "Time";
			this.ResumeLayout(false);
			this.PerformLayout();

		}

		#endregion

		private System.Windows.Forms.Label label1;
		private System.Windows.Forms.TextBox s_sec;
		private System.Windows.Forms.TextBox m_min;
		private System.Windows.Forms.TextBox h_hours;
		private System.Windows.Forms.TextBox hours_11;
		private System.Windows.Forms.TextBox minutes_22;
		private System.Windows.Forms.TextBox seconds_22;
		private System.Windows.Forms.Label label2;
		private System.Windows.Forms.Label label3;
		private System.Windows.Forms.Label label4;
		private System.Windows.Forms.Label label5;
		private System.Windows.Forms.Label label6;
		private System.Windows.Forms.Label to_str;
		private System.Windows.Forms.Button sum;
		private System.Windows.Forms.Button sub;
		private System.Windows.Forms.Button too_second;
		private System.Windows.Forms.Button too_min;
		private System.Windows.Forms.Button too_hour;
		private System.Windows.Forms.Button button6;
		private System.Windows.Forms.Label to_seconds;
		private System.Windows.Forms.Label to_minutes;
		private System.Windows.Forms.Label to_hours;
		private System.Windows.Forms.TextBox add_chislo;
		private System.Windows.Forms.Button add_sec;
		private System.Windows.Forms.Button add_min;
		private System.Windows.Forms.Button add_hour;
	}
}

