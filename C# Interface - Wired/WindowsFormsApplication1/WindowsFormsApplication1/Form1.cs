using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.IO.Ports;

namespace WindowsFormsApplication1
{
    public partial class Form1 : Form
    {
        SerialPort serialPort1 = new SerialPort();

        public Form1()
        {
            InitializeComponent();

            serialPort1.PortName = "COM4";
            serialPort1.BaudRate = 9600;
            serialPort1.Open();
        }

        private void button1_Click(object sender, EventArgs e)
        {
        }
        private void button2_Click(object sender, EventArgs e)
        {
        }

        private void button1_MouseDown(object sender, MouseEventArgs e)
        {
            serialPort1.Write("12");
        }

        private void button1_MouseUp(object sender, MouseEventArgs e)
        {
            serialPort1.Write("10");
        }

        private void button2_MouseDown(object sender, MouseEventArgs e)
        {
            serialPort1.Write("11");
        }

        private void button2_MouseUp(object sender, MouseEventArgs e)
        {
            serialPort1.Write("10");
        }

        private void button3_MouseDown(object sender, MouseEventArgs e)
        {
            serialPort1.Write("21");
        }

        private void button3_MouseUp(object sender, MouseEventArgs e)
        {
            serialPort1.Write("20");
        }

        private void button4_MouseDown(object sender, MouseEventArgs e)
        {
            serialPort1.Write("22");
        }

        private void button4_MouseUp(object sender, MouseEventArgs e)
        {
            serialPort1.Write("20");
        }

        private void button8_MouseDown(object sender, MouseEventArgs e)
        {
            serialPort1.Write("31");
        }

        private void button8_MouseUp(object sender, MouseEventArgs e)
        {
            serialPort1.Write("30");
        }

        private void button7_MouseDown(object sender, MouseEventArgs e)
        {
            serialPort1.Write("32");
        }

        private void button7_MouseUp(object sender, MouseEventArgs e)
        {
            serialPort1.Write("30");
        }

        private void button5_MouseDown(object sender, MouseEventArgs e)
        {
            serialPort1.Write("41");
        }

        private void button5_MouseUp(object sender, MouseEventArgs e)
        {
            serialPort1.Write("40");
        }

        private void button6_MouseDown(object sender, MouseEventArgs e)
        {
            serialPort1.Write("42");
        }

        private void button6_MouseUp(object sender, MouseEventArgs e)
        {
            serialPort1.Write("40");
        }
    }
}
