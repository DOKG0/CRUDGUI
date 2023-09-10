#include "pch.h"
#include "DB.h"
#include "Form1.h"
DB::DB()
{
	this->connectionString = "datasource=localhost; username=tecnologo; password=tecnologo; database=vehiculo;";
	this->conn = gcnew MySqlConnection(this->connectionString);

}


void DB::AbrirConexion()
{

	this->conn->Open();
}

void DB::CerrarConexion()
{

	this->conn->Close();
}

DataTable^ DB::getData()
{
	String^ sql = "select * from auto";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}




void DB::Insertar(String^ v, String^ m, String^ mo, String^ f, String^ p)
{
	String^ sql = "insert into auto(vin,marca,modelo,fecha_fab,precio) values ('" + v + "', '" + m + "', '" + mo + "', '" + f + "', " + p + " )";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}

}

void DB::Modificar(String^ v, String^ m, String^ mo, String^ f, String^ p,String^ ref)
{
	String^ sql = "update auto set vin = '" + v + "', marca = '" + m + "', modelo = '" + mo + "', fecha_fab = '" + f + "', precio = '" + p + "' where vin = '" + ref + "'";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		cursor->ExecuteNonQuery();

	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}


}


void DB::Eliminar2(String^ v)
{
	String^ sql = "delete from auto where vin = '" + v + "'";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);

	try
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		cursor->ExecuteNonQuery();

	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);

	}
}

DataTable^ DB::Consulto(String^ v)
{
	String^ sql = "Select * from auto where vin = '" + v + "'";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;

	try
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		cursor->ExecuteNonQuery();

	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);

	}

}









