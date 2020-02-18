using Time_1;
using System;
using Microsoft.VisualStudio.TestTools.UnitTesting;

namespace Time_1.Test
{
	[TestClass]
	public class Time_1Test
	{
		[TestMethod]
		public void Test_Constructor()
		{
			Time t = new Time();
			Assert.IsTrue(t.hours == 0 && t.minutes == 0 && t.seconds == 0);
		}


		[TestMethod()]
		public void Test_Constructor_paratemeters()
		{
			{
				Time a = new Time(15, 20, 34);
				Assert.IsTrue(a.hours == 15 && a.minutes == 20 && a.seconds == 34);
			}

			{
				Time b = new Time(23, 59, 59);
				Assert.IsTrue(b.hours == 23 && b.minutes == 59 && b.seconds == 59);

			}
		}


		[TestMethod()]
		public void Test_Sum()
		{

			{
				Time a = new Time(10, 20, 03);
				Time b = new Time(7, 8, 29);
				Time time1 = a + b;
				Assert.IsTrue(time1.hours == 17 && time1.minutes == 28 && time1.seconds == 32);
			}


			{
				Time a = new Time(23, 59, 09);
				Time b = new Time(0, 0, 51);
				Time time1 = a + b;
				Assert.IsTrue(time1.hours == 0 && time1.minutes == 0 && time1.seconds == 0);
			}


			{
				Time a = new Time(15, 46, 20);
				Time b = new Time(7, 4, 20);
				Time time1 = a + b;
				Assert.IsTrue(time1.hours == 22 && time1.minutes == 50 && time1.seconds == 40);
			}

		}


		[TestMethod()]
		public void Test_Sub()
		{

			{
				Time a = new Time(10, 20, 33);
				Time b = new Time(3, 8, 33);
				Time time1 = a - b;
				Assert.IsTrue(time1.hours == 7 && time1.minutes == 12 && time1.seconds == 0);
			}


			{
				Time a = new Time(23, 59, 09);
				Time b = new Time(0, 0, 51);
				Time time1 = a - b;
				Assert.IsTrue(time1.hours == 23 && time1.minutes == 58 && time1.seconds == 18);
			}


			{
				Time a = new Time(15, 46, 20);
				Time b = new Time(7, 4, 20);
				Time time1 = a - b;
				Assert.IsTrue(time1.hours == 8 && time1.minutes == 42 && time1.seconds == 0);
			}

		}



		[TestMethod()]
		public void Test_Transfer_Time()
		{

			{
				Time t = new Time(23, 4, 28);
				Assert.IsTrue((Math.Round(t.To_hours(), 2)) == 23.07);
			}


			{
				Time t = new Time(23, 4, 28);
				Assert.IsTrue((Math.Round(t.To_minutes(), 2)) == 1384.47);
			}

			{
				Time t = new Time(23, 4, 28);
				Assert.IsTrue((Math.Round(t.To_seconds(), 2)) == 83068);
			}


			{
				Time t = new Time(12, 57, 20);
				Assert.IsTrue((Math.Round(t.To_hours(), 2)) == 12.96);
			}


			{
				Time t = new Time(12, 57, 20);
				Assert.IsTrue((Math.Round(t.To_minutes(), 2)) == 777.33);
			}


			{
				Time t = new Time(12, 57, 20);
				Assert.IsTrue((Math.Round(t.To_seconds(), 2)) == 46640);
			}
		}


		[TestMethod()]
		public void Test_Add_Time()
		{

			{
				Time t = new Time(0, 0, 45);
				t.Add_seconds(30);
				Assert.IsTrue(t.minutes == 1 && t.seconds == 15);
			}


			{
				Time t1 = new Time(0, 0, 45);
				t1.Add_seconds(15);
				Assert.IsTrue(t1.minutes == 1);
			}


			{
				Time t2 = new Time(1, 0, 30);
				t2.Add_minutes(52);
				Assert.IsTrue(t2.hours ==1 && t2.minutes == 52 && t2.seconds == 30);
			}


			{
				Time t2 = new Time(18, 0, 0);
				t2.Add_hours(2);
				Assert.IsTrue(t2.hours == 20 );
			}


			{
				Time t2 = new Time(18, 0, 0);
				t2.Add_time(4, 30, 8);
				Assert.IsTrue(t2.hours == 22 && t2.minutes == 30 && t2.seconds == 8);
			}
		}
	
	}
}
