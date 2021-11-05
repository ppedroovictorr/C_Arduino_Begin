Public Class Form1
    ' comandos fundamentais

    Private Sub Button1_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button1.Click

        SerialPort1.Write("0," & TextBox1.Text)

    End Sub

    Private Sub Form1_Activated(ByVal sender As Object, ByVal e As System.EventArgs) Handles Me.Activated

        SerialPort1.PortName = "COM3"
        SerialPort1.Open()

        SerialPort1.Write("2,0")
    End Sub

    Private Sub Form1_Deactivate(ByVal sender As Object, ByVal e As System.EventArgs) Handles Me.Deactivate
        SerialPort1.Close()
    End Sub


    Private Sub Button3_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button3.Click

        SerialPort1.Write("1,1")

    End Sub

    Private Sub Button4_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button4.Click

        SerialPort1.Write("1,0")

    End Sub



    Delegate Sub meumetodo(ByVal [text] As String)
    Dim subrotinaSTR As New meumetodo(AddressOf tratamentoSTR)
    Dim v1() As String

    Private Sub SerialPort1_DataReceived(ByVal sender As Object, ByVal e As System.IO.Ports.SerialDataReceivedEventArgs) Handles SerialPort1.DataReceived

        Dim string1 As String = SerialPort1.ReadLine()
        Invoke(subrotinaSTR, string1)
    End Sub

    Sub tratamentoSTR(ByVal meustring As String)
        Dim i As Integer
        i = 0
        TextBox2.Text = ""
        While meustring(i) <> ","

            TextBox2.Text = TextBox2.Text + meustring(i)
            i = i + 1
        End While

        TextBox3.Text = meustring(i + 1)

        If meustring(i + 1) = "1" Then
            OvalShape1.BackColor = Color.DarkGray
        Else
            OvalShape1.BackColor = Color.Red
        End If


    End Sub

  
   
End Class
