using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

using namespace Data;
using namespace Data::SqlClient;

ref class Functions
{
public:
	Functions();

	SqlConnection^ conn;
	SqlConnectionStringBuilder^ connStringBuilder;

	void ConnectToDB()
	{
		//Data Source=LAPTOP-DNBB2GN8\SQLEXPRESS;Initial Catalog=test;Integrated Security=True
		
		connStringBuilder = gcnew SqlConnectionStringBuilder();
		connStringBuilder->DataSource = "LAPTOP-DNBB2GN8\\SQLEXPRESS";
		connStringBuilder->InitialCatalog = "test";
		connStringBuilder->UserID = "sa";
		connStringBuilder->Password = "Kristo4ever+";

		conn = gcnew SqlConnection(Convert::ToString(connStringBuilder));
	}

public: void Insert(String^ name)
{
	try
	{
		ConnectToDB();
		String^ cmdText = "INSERT INTO dbo.tbl_Name(Name) VALUES(@Name)";
		SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);

		cmd->Parameters->AddWithValue("@Name", name);
		conn->Open();
		cmd->ExecuteNonQuery();
	}
	finally
	{
		if (conn != nullptr)
		{
			conn->Close();
		}
	}
}
};
