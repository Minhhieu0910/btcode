using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO;
using System.Runtime.InteropServices;

namespace Project
{

    public partial class Form1 : Form
    {
        string flag;
        int index;
        DataTable dtSV;
        DataTable dfS;
        public Form1()
        {
            InitializeComponent();
        }
        
        DataTable table = new DataTable();
        private void Form1_Load(object sender, EventArgs e)
        {
            LockControl();
            btnLuu.Enabled = false;
            dtSV = createTable();
            dfS = search();

        }
        public void LockControl()
        {
            btnXoa.Enabled = false;
            btnThem.Enabled = false;
            btnCapNhat.Enabled = false;
            btnLuu.Enabled = true;
           
           

        }
        public void UnlockControl()
        {
            btnXoa.Enabled = true;
            btnThem.Enabled = true;
            btnCapNhat.Enabled = true;
            btnLuu.Enabled = false;
           
        }
        
        public void LockControl2()
        {
            btnClear.Enabled = true;
            btnSapXep1.Enabled = false;
            btnSapXepTen.Enabled = false;
            btnTiemKiem1.Enabled = false;
        }
        public void UnLockControl2()
        {
            btnClear.Enabled = false;
            btnSapXep1.Enabled = true;
            btnSapXepTen.Enabled = true;
            btnTiemKiem1.Enabled = true;
        }
        public void Xephang()
        {
            for (int i = 0; i < dataGridViewImport.Rows.Count - 1; i++)
            {
                double toan = Convert.ToDouble(dtSV.Rows[i][4]);
                double ly = Convert.ToDouble(dtSV.Rows[i][5]);
                double hoa = Convert.ToDouble(dtSV.Rows[i][6]);
                double tb = (toan + ly + hoa) / 3;
                string hl;
                if (tb >= 8)
                {
                    hl = "Giỏi";
                }
                else if (tb >= 6.5)
                {
                    hl = "Khá";
                }
                else if (tb >= 5)
                {
                    hl = "Trung bình";
                }
                else
                {
                    hl = "Yếu";
                }
                dtSV.Rows[i][7] = tb.ToString();
                dtSV.Rows[i][8] = hl;

            }
        }

        public DataTable createTable()
        {
            DataTable dt = new DataTable();
            dt.Columns.Add("ID", typeof(string));
            dt.Columns.Add("Gioitinh", typeof(string));
            dt.Columns.Add("Hoten", typeof(string));
            dt.Columns.Add("Tuoi", typeof(int));
            dt.Columns.Add("Diemtoan", typeof(int));
            dt.Columns.Add("Diemly", typeof(int));
            dt.Columns.Add("Diemhoa", typeof(int));
            dt.Columns.Add("DiemTB", typeof(double));
            dt.Columns.Add("HocLuc", typeof(string));

            return dt;
        }
        public DataTable search()
        {
            DataTable df = new DataTable();
            df.Columns.Add("ID1", typeof(string));
            df.Columns.Add("Gioitinh1", typeof(string));
            df.Columns.Add("Hoten1", typeof(string));
            df.Columns.Add("Tuoi1", typeof(int));
            df.Columns.Add("Diemtoan1", typeof(int));
            df.Columns.Add("Diemly1", typeof(int));
            df.Columns.Add("Diemhoa1", typeof(int));
            df.Columns.Add("DiemTB1", typeof(double));
            df.Columns.Add("HocLuc1", typeof(string));

            return df;
        }
        private void btnImport_Click(object sender, EventArgs e)
        {

            string[] lines = File.ReadAllLines(@"D:\winform\student.txt");
            string[] values;

            for (int i = 0; i < lines.Length; i++)
            {
                values = lines[i].ToString().Split('/');
                string[] row = new string[values.Length];

                for (int j = 0; j < values.Length; j++)
                {
                    row[j] = values[j].Trim();

                }
                dtSV.Rows.Add(row);
                dataGridViewImport.DataSource = dtSV;
            }
            Xephang();
            UnlockControl();           
            btnImport.Enabled = false;          
        }

        private void Reset()
        {
            txtHoTen.Clear();
            cbGioiTinh.Text = "";
            txtTuoi.Clear();
            txtDiemToan.Clear();
            txtDiemLy.Clear();
            txtDiemHoa.Clear();
            txtID.Clear();
        }



        private void btnThem_Click(object sender, EventArgs e)
        {
            flag = "add";
            LockControl();
            int count = 0;
            count = dataGridViewImport.Rows.Count;

            string chuoi1 = "";
            int chuoi2 = 0;
            chuoi1 = Convert.ToString(dataGridViewImport.Rows[count - 2].Cells[0].Value);
            chuoi2 = Convert.ToInt32((chuoi1.Remove(0, 1)));
            if (chuoi2 + 1 < 10)
            {
                txtID.Text = "K0" + (chuoi2 + 1).ToString();
            }
            else if (chuoi2 + 1 < 100)
            {
                txtID.Text = "K" + (chuoi2 + 1).ToString();
            }

        }
        private void btnLuu_Click(object sender, EventArgs e)
        {
            UnlockControl();
            if (flag == "add")
            {
                if (checkData())
                {
                   
                    dtSV.Rows.Add(txtID.Text, txtHoTen.Text, cbGioiTinh.Text, txtTuoi.Text, txtDiemToan.Text, txtDiemLy.Text, txtDiemHoa.Text);
                    Xephang();
                    MessageBox.Show("Bạn đã thêm thành công 1 sinh viên !");
                    Reset();

                }

            }
            else if (flag == "update")
            {
                if (checkData())
                {
                    dtSV.Rows[index][0] = txtID.Text;
                    dtSV.Rows[index][1] = txtHoTen.Text;
                    dtSV.Rows[index][2] = cbGioiTinh.Text;
                    dtSV.Rows[index][3] = txtTuoi.Text;
                    dtSV.Rows[index][4] = txtDiemToan.Text;
                    dtSV.Rows[index][5] = txtDiemLy.Text;
                    dtSV.Rows[index][6] = txtDiemHoa.Text;
                    dataGridViewImport.DataSource = dtSV;
                    dataGridViewImport.RefreshEdit();                                         
                    MessageBox.Show("Cập nhật thành công !");
                    Reset();
                }
            }
            else if (flag == "delete")
            {
                for (int i = 0; i < dataGridViewImport.Rows.Count - 1; i++)
                {
                    if (txtID.Text == dtSV.Rows[i][0].ToString())
                    {
                        if (MessageBox.Show("Bạn có muốn xóa sinh viên này khỏi danh sách", "Thông báo", MessageBoxButtons.YesNo, MessageBoxIcon.Question) == DialogResult.Yes)
                        {
                            dataGridViewImport.Rows.RemoveAt(i);
                        }
                        else
                        {
                            txtID.Clear();
                        }
                        
                    }

                }
            }           
        }
        public bool checkData()
        {
            if (txtHoTen.Text == "")
            {
                MessageBox.Show("Bạn chưa nhập vào Họ tên của sinh viên !");
                txtHoTen.Focus();
                return false;
            }
            if (cbGioiTinh.Text == "")
            {
                MessageBox.Show("Bạn chưa nhập vào Giới tính của sinh viên !");
                cbGioiTinh.Focus();
                return false;
            }
            if (txtTuoi.Text == "")
            {
                MessageBox.Show("Bạn chưa nhập vào Tuổi của sinh viên !");
                txtTuoi.Focus();
                return false;
            }
            if (txtDiemToan.Text == "")
            {
                MessageBox.Show("Bạn chưa nhập vào Điểm toán của sinh viên !");
                txtDiemToan.Focus();
                return false;
            }
            if (txtDiemLy.Text == "")
            {
                MessageBox.Show("Bạn chưa nhập vào Điểm lý của sinh viên !");
                txtDiemLy.Focus();
                return false;
            }
            if (txtDiemHoa.Text == "")
            {
                MessageBox.Show("Bạn chưa nhập vào Điểm hóa của sinh viên !");
                txtDiemHoa.Focus();
                return false;
            }
            return true;

        }


        private void btnCapNhat_Click(object sender, EventArgs e)
        {
            flag = "update";
            LockControl();          
        }

        private void dataGridViewImport_CellClick(object sender, DataGridViewCellEventArgs e)
        {
            index = dataGridViewImport.CurrentCell.RowIndex;
            DataTable dt = (DataTable)dataGridViewImport.DataSource;
            if (dt.Rows.Count > 0)
            {
                txtID.Text = dataGridViewImport.Rows[index].Cells[0].Value.ToString();
                txtHoTen.Text = dataGridViewImport.Rows[index].Cells[1].Value.ToString();
                cbGioiTinh.Text = dataGridViewImport.Rows[index].Cells[2].Value.ToString();
                txtTuoi.Text = dataGridViewImport.Rows[index].Cells[3].Value.ToString();
                txtDiemToan.Text = dataGridViewImport.Rows[index].Cells[4].Value.ToString();
                txtDiemLy.Text = dataGridViewImport.Rows[index].Cells[5].Value.ToString();
                txtDiemHoa.Text = dataGridViewImport.Rows[index].Cells[6].Value.ToString();
            }
        }

        private void btnXoa_Click(object sender, EventArgs e)
        {
            Reset();
            //radHoTen1.ReadOnly = true;           
            txtTuoi.ReadOnly = true;
            txtDiemToan.ReadOnly = true;
            txtDiemLy.ReadOnly = true;
            txtDiemHoa.ReadOnly = true;
            LockControl();
            txtID.Focus();
            flag = "delete";
            
        }
       
        private void btnTiemKiem1_Click_1(object sender, EventArgs e)
        {
            //Reset();
            txtID.ReadOnly = true;
            txtTuoi1.ReadOnly = true;
            txtDiemToan1.ReadOnly = true;
            txtDiemLy1.ReadOnly = true;
            txtDiemHoa1.ReadOnly = true;
            txtID1.ReadOnly = true;

            txtHoTen1.Focus();
            btnSapXep1.Enabled = false;
            btnSapXepTen.Enabled = false;           

            for (int i = 0; i < dataGridViewImport.Rows.Count - 1; i++)
            {
                if (txtHoTen1.Text == dataGridViewImport[1, i].Value.ToString())
                {
                    dataGridViewTimKiem.Rows.Add(dataGridViewImport[0, i].Value, dataGridViewImport[1, i].Value, dataGridViewImport[2, i].Value, dataGridViewImport[3, i].Value, dataGridViewImport[4, i].Value, dataGridViewImport[5, i].Value, dataGridViewImport[6, i].Value, dataGridViewImport[7, i].Value, dataGridViewImport[8, i].Value);
                }                   
            }
            txtHoTen1.Clear();
           
        }

        private void btnSapXep1_Click(object sender, EventArgs e)
        {
            LockControl2();
            
            double[] searchh = new double[10];
            double h;
            for (int i = 0; i < dataGridViewImport.Rows.Count - 1; i++)
            {
                
                double diemtbi = Convert.ToDouble(dtSV.Rows[i][7]);
                searchh[i] = diemtbi ;
            }
            for (int i = 0; i < dataGridViewImport.Rows.Count - 1; i++)
            {
                for (int j = i; j < dataGridViewImport.Rows.Count - 1; j++)
                {
                    if (searchh[i] <= searchh[j])
                    {
                        h = searchh[j];
                        searchh[j] = searchh[i];
                        searchh[i] = h;
                    }    
                }                  
            }
            for (int i = 0; i < dataGridViewImport.Rows.Count - 1; i++)
            {
                for (int j = 0; j < dataGridViewImport.Rows.Count - 1; j++)
                {
                    string t = Convert.ToString(searchh[i]);
                    string r = Convert.ToString(dtSV.Rows[j][7]);
                    if (t == r )
                    {
                        dataGridViewTimKiem.Rows.Add(dataGridViewImport[0, j].Value, dataGridViewImport[1, j].Value, dataGridViewImport[2, j].Value, dataGridViewImport[3, j].Value, dataGridViewImport[4, j].Value, dataGridViewImport[5, j].Value, dataGridViewImport[6, j].Value, dataGridViewImport[7, j].Value, dataGridViewImport[8, j].Value);
                    }
                }    
            }    
        }    
                                
        private void btnClear_Click(object sender, EventArgs e)
        {
            dataGridViewTimKiem.Rows.Clear();
            UnLockControl2();
        }

        private void btnSapXepTen_Click(object sender, EventArgs e)
        {
            LockControl2();
            string[] a = new string[dataGridViewImport.Rows.Count - 1];
            string temp;
            string[] b = new string[dataGridViewImport.Rows.Count - 1];
            
            for (int i=0;i<dataGridViewImport.Rows.Count -1;i++)
            {
                a[i] = Convert.ToString(dtSV.Rows[i][1]);
            }
            
            for (int j=0; j< dataGridViewImport.Rows.Count -1; j++)
            {
               
                for (int k = 0; k < dataGridViewImport.Rows.Count - 2; k++)
                {
                    
                    if (a[k].CompareTo(a[k+1]) >0)
                    {
                        temp = a[k];
                        a[k] = a[k+1];
                        a[k+1] = temp;
                        
                    }    
                }    
            }
            for (int g = 0; g < dataGridViewImport.Rows.Count - 1; g++)
            {
                for(int j=0;j< dataGridViewImport.Rows.Count - 1; j++)
                {
                    if (a[g] == (dtSV.Rows[j][1]))
                    {
                        dataGridViewTimKiem.Rows.Add(dataGridViewImport[0, j].Value, dataGridViewImport[1, j].Value, dataGridViewImport[2, j].Value, dataGridViewImport[3, j].Value, dataGridViewImport[4, j].Value, dataGridViewImport[5, j].Value, dataGridViewImport[6, j].Value, dataGridViewImport[7, j].Value, dataGridViewImport[8, j].Value);
                    }    
                }    
            }   
        }

        private void btnExport_Click(object sender, EventArgs e)
        {
            TextWriter writer = new StreamWriter(@"D:\winform\export.txt");
            for(int i=0;i< dataGridViewImport.Rows.Count -1;i++)
            {
                for(int j=0;j<dataGridViewImport.Columns.Count;j++)
                {
                    writer.Write("   " + dataGridViewImport.Rows[i].Cells[j].Value.ToString()+"   "+"|");                       
                }
                writer.WriteLine("\n");
                writer.WriteLine("---------------------------------------------------------------------------------------------------------------");
            }
            writer.Close();
            MessageBox.Show("Data Exported");
        }
    }
}
