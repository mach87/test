using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using ulib;

namespace managed
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            ulib1 u = new ulib1();
            int n;
            string s;
            unsafe
            {
                char* cs = (char*)u.getString(&n);
                s = new string(cs,0,n);
                textBox1.Text = s;
            }
        }
    }
}
