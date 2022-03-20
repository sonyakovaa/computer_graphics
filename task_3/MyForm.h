#pragma once

#include <iostream>

namespace Kovaleva {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	float lines_clown[] = {
		// �������
		6.0f, 1.0f, 6.0f, 7.0f, // ������ ������ ��-�� �������
		14.0f, 1.0f, 14.0f, 7.0f, // ������ ������� ��-�� �������
		6.0f, 1.0f, 10.0f, 5.0f, // ����� ������ ��-�� ������� - ����� �����
		6.0f, 7.0f, 10.0f, 3.0f, // ����� ������ ��-�� ������� - ������ ����
		14.0f, 1.0f, 10.0f, 5.0f, // ����� ������� ��-�� ������� - ����� �����
		14.0f, 7.0f, 10.0f, 3.0f, // ����� ������� ��-�� ������� - ������ ����
		// ������� ������ ������ ��-�� �������
		7.0f, 3.0f, 7.0f, 4.0f,
		7.0f, 4.0f, 8.0f, 4.0f,
		7.0f, 3.0f, 8.0f, 3.0f,
		8.0f, 3.0f, 8.0f, 4.0f,
		// ������� ��-� ������ ������ ��-�� �������
		6.0f, 6.0f, 7.0f, 5.0f,
		7.0f, 5.0f, 6.0f, 4.0f,
		// ������ ��-� ������ ������ ��-�� �������
		6.0f, 3.0f, 7.0f, 2.0f,
		// ������� ������ ������� ��-�� �������
		12.0f, 5.0f, 13.0f, 5.0f,
		13.0f, 5.0f, 13.0f, 4.0f,
		13.0f, 4.0f, 12.0f, 4.0f,
		12.0f, 4.0f, 12.0f, 5.0f,
		// ������� ��-� ������ ������� ��-�� �������
		14.0f, 5.0f, 13.0f, 6.0f,
		// ������ ��-� ������ ������� ��-�� �������
		14.0f, 2.0f, 13.0f, 3.0f,
		13.0f, 3.0f, 14.0f, 4.0f,

		// ������� ����� ���� ������
		9.0f, 6.0f, 11.0f, 6.0f, // ����� ����������
		11.0f, 6.0f, 15.0f, 8.0f, // ������ ���� ����������
		15.0f, 8.0f, 16.0f, 10.0f, // ������ ����� �� ���
		16.0f, 10.0f, 16.0f, 15.0f, // ������ ����� ������ ����
		16.0f, 15.0f, 15.0f, 17.0f, // ����� � ������ ������� �����
		15.0f, 17.0f, 15.0f, 19.0f, // ������ ����� ������� �����
		15.0f, 19.0f, 13.0f, 21.0f, // ���� ������� ����� 
		13.0f, 21.0f, 11.0f, 21.0f, // ������ ����� ������� �����
		11.0f, 21.0f, 10.0f, 18.5f, // ������ ����� � ����������� ����
		10.0f, 18.5f, 9.0f, 21.0f, // ����� ����� �� ����������� ����
		9.0f, 21.0f, 7.0f, 21.0f, // ������ ����� ������ �����
		7.0f, 21.0f, 5.0f, 19.0f, // ���� ������ �����
		5.0f, 19.0f, 5.0f, 17.0f, // ������ ����� ������ �����
		5.0f, 17.0f, 4.0f, 15.0f, // ����� � ������ ������ �����
		4.0f, 15.0f, 4.0f, 10.0f, // ������ ����� ����� ����
		4.0f, 10.0f, 5.0f, 8.0f, // ����� ����� �� ���
		5.0f, 8.0f, 9.0f, 6.0f, // ����� ���� ����������

		// ����� ����
		10.0f, 18.5f, 9.0f, 16.0f,
		9.0f, 16.0f, 7.0f, 16.0f,
		7.0f, 16.0f, 5.0f, 17.0f,
		// ������� ������ �����
		7.0f, 16.0f, 6.0f, 17.0f,
		6.0f, 17.0f, 7.0f, 19.0f,
		7.0f, 19.0f, 8.0f, 19.0f,
		8.0f, 19.0f, 9.0f, 17.0f,
		9.0f, 17.0f, 8.0f, 16.0f,
		// ����� ������
		7.0f, 16.0f, 7.0f, 17.0f,
		7.0f, 17.0f, 8.0f, 17.0f,
		8.0f, 17.0f, 8.0f, 16.0f,

		// ������ ����
		10.0f, 18.5f, 11.0f, 16.0f,
		11.0f, 16.0f, 13.0f, 16.0f,
		13.0f, 16.0f, 15.0f, 17.0f,
		// ������� ������� �����
		12.0f, 16.0f, 11.0f, 17.0f,
		11.0f, 17.0f, 12.0f, 19.0f,
		12.0f, 19.0f, 13.0f, 19.0f,
		13.0f, 19.0f, 14.0f, 17.0f,
		14.0f, 17.0f, 13.0f, 16.0f,
		// ������ ������
		12.0f, 16.0f, 12.0f, 17.0f,
		12.0f, 17.0f, 13.0f, 17.0f,
		13.0f, 17.0f, 13.0f, 16.0f,

		// ���
		9.0f, 16.0f, 11.0f, 16.0f,
		11.0f, 16.0f, 13.0f, 15.0f,
		13.0f, 15.0f, 14.0f, 13.0f,
		14.0f, 13.0f, 13.0f, 12.0f,
		13.0f, 12.0f, 10.0f, 11.0f,
		10.0f, 11.0f, 7.0f, 12.0f,
		7.0f, 12.0f, 6.0f, 13.0f,
		6.0f, 13.0f, 7.0f, 15.0f,
		7.0f, 15.0f, 9.0f, 16.0f,

		// ���
		14.0f, 13.0f, 15.0f, 13.0f,
		15.0f, 13.0f, 16.0f, 12.0f,
		16.0f, 11.0f, 13.0f, 9.0f,
		13.0f, 9.0f, 10.0f, 8.0f,
		10.0f, 8.0f, 7.0f, 9.0f,
		7.0f, 9.0f, 4.0f, 11.0f,
		4.0f, 12.0f, 5.0f, 13.0f,
		5.0f, 13.0f, 6.0f, 13.0f,

		// ������
		6.0f, 11.0f, 7.0f, 10.0f,
		7.0f, 10.0f, 10.0f, 9.0f,
		10.0f, 9.0f, 13.0f, 10.0f,
		13.0f, 10.0f, 14.0f, 11.0f,
		6.0f, 12.0f, 5.0f, 11.0f,
		14.0f, 12.0f, 15.0f, 11.0f,

		// ������
		4.0f, 10.0f, 2.0f, 12.0f,
		2.0f, 12.0f, 3.0f, 15.0f,
		3.0f, 15.0f, 2.0f, 13.0f,
		2.0f, 13.0f, 1.0f, 14.0f,
		1.0f, 14.0f, 2.0f, 16.0f,
		2.0f, 16.0f, 1.0f, 15.0f,
		1.0f, 15.0f, 1.0f, 17.0f,
		1.0f, 17.0f, 5.0f, 22.0f,
		5.0f, 22.0f, 6.0f, 21.0f,
		6.0f, 21.0f, 8.0f, 22.0f,
		8.0f, 22.0f, 12.0f, 22.0f,
		12.0f, 22.0f, 14.0f, 21.0f,
		14.0f, 21.0f, 15.0f, 22.0f,
		15.0f, 22.0f, 19.0f, 17.0f,
		19.0f, 17.0f, 19.0f, 15.0f,
		19.0f, 15.0f, 18.0f, 16.0f,
		18.0f, 16.0f, 19.0f, 14.0f,
		19.0f, 14.0f, 18.0f, 13.0f,
		18.0f, 13.0f, 17.0f, 15.0f,
		17.0f, 15.0f, 18.0f, 12.0f,
		18.0f, 12.0f, 16.0f, 10.0f,

		// �����
		5.0f, 22.0f, 5.0f, 23.0f,
		5.0f, 23.0f, 7.0f, 24.0f,
		7.0f, 24.0f, 6.0f, 26.0f,
		6.0f, 26.0f, 7.0f, 28.0f,
		7.0f, 28.0f, 8.0f, 29.0f,
		8.0f, 29.0f, 12.0f, 29.0f,
		12.0f, 29.0f, 13.0f, 28.0f,
		13.0f, 28.0f, 14.0f, 26.0f,
		14.0f, 26.0f, 13.0f, 24.0f,
		13.0f, 24.0f, 15.0f, 23.0f,
		15.0f, 23.0f, 15.0f, 22.0f,

		// ��������� �� �����
		12.0f, 23.0f, 15.0f, 25.0f,
		15.0f, 25.0f, 16.0f, 25.0f,
		16.0f, 25.0f, 16.0f, 26.0f,
		16.0f, 26.0f, 15.0f, 26.0f,
		15.0f, 26.0f, 15.0f, 25.0f,
		15.0f, 25.0f, 14.0f, 26.0f,
		14.0f, 26.0f, 15.0f, 26.0f,
		15.0f, 26.0f, 16.0f, 27.0f,
		16.0f, 27.0f, 16.0f, 26.0f,
		16.0f, 26.0f, 17.0f, 25.0f,
		17.0f, 25.0f, 16.0f, 25.0f,
		16.0f, 25.0f, 15.0f, 24.0f,
		15.0f, 24.0f, 15.0f, 25.0f,
	};
	float Vx = 8.5f; // ������ ������� �� �����������
	float Vy = 8.5f; // ������ ������� �� ���������
	float Vx_clown = 20.0f; // ������ ������� �� �����������
	float Vy_clown = 30.0f; // ������ ������� �� ���������
	float aspectFig = Vx / Vy;

	mat3 T = mat3(1.f); // �������, � ������� ������������� ��� ��������������
// ������������� - ��������� �������
	mat3 initT; // ������� ���������� ��������������
	vector<path> figure;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog;
	private: System::Windows::Forms::Button^ btnOpen;

	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->openFileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->btnOpen = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// openFileDialog
			// 
			this->openFileDialog->DefaultExt = L"txt";
			this->openFileDialog->FileName = L"������� ���� ������";
			this->openFileDialog->Filter = L" ��������� ����� (*.txt)|*.txt|��� ����� (*.*)|*.*";
			this->openFileDialog->Title = L"������� ����";
			this->openFileDialog->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::openFileDialog_FileOk);
			// 
			// btnOpen
			// 
			this->btnOpen->Location = System::Drawing::Point(89, 35);
			this->btnOpen->Name = L"btnOpen";
			this->btnOpen->Size = System::Drawing::Size(93, 39);
			this->btnOpen->TabIndex = 0;
			this->btnOpen->Text = L"�������";
			this->btnOpen->UseVisualStyleBackColor = true;
			this->btnOpen->Click += gcnew System::EventHandler(this, &MyForm::btnOpen_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 253);
			this->Controls->Add(this->btnOpen);
			this->DoubleBuffered = true;
			this->KeyPreview = true;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::MyForm_Paint);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->Resize += gcnew System::EventHandler(this, &MyForm::MyForm_Resize);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: bool keepAspectRatio; // �������� - ��������� �� ����������� ������ �������?
	private: bool changeTheDrawing;
	private: System::Void MyForm_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		Graphics^ g = e->Graphics;
		g->Clear(Color::DimGray);

		for (int i = 0; i < figure.size(); i++) {
			path linez = figure[i]; //linez - ��������� �������� �����
			Pen^ pen = gcnew Pen(Color::FromArgb(linez.color.x, linez.color.y, linez.color.z));
			pen->Width = linez.thickness;

			vec2 start = normalize(T * vec3(linez.vertices[0], 1.0)); //������ ��������� �����
			for (int j = 1; j < linez.vertices.size(); j++) { //���� �� �������� ������ (�� �������)
				vec2 end = normalize(T * vec3(linez.vertices[j], 1.0)); //�������� �����
				g->DrawLine(pen, start.x, start.y, end.x, end.y); //��������� �������
				start = end; //�������� ����� �������� ������� ���������� ��������� ������ ����������
			}
		}

	}
	private: System::Void MyForm_Resize(System::Object^ sender, System::EventArgs^ e) {
		Refresh();
	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		float Wcx = ClientRectangle.Width / 2.f; // ���������� ������
		float Wcy = ClientRectangle.Height / 2.f; // �������� ����

		switch (e->KeyCode) {
		case Keys::Q:
			T = translate(-Wcx, -Wcy) * T; // ������� ������ ��������� � (Wcx, Wcy)
			T = rotate(0.01f) * T; // ������� �� 0.01 ������ ������������
			// ������ ������
			T = translate(Wcx, Wcy) * T; // ������� ������ ��������� �������
			break;

		case Keys::W:
			T = translate(0.f, -1.f) * T; // ����� ����� �� ���� ������
			break;

		case Keys::E:
			T = translate(-Wcx, -Wcy) * T; // ������� ������ ��������� � (Wcx, Wcy), ����� �������� ���� �����. ������
			T = rotate(-0.01f) * T; // ������� �� 0.01 ������ ������������
			// ������ ������
			T = translate(Wcx, Wcy) * T; // ������� ������ ��������� �������
			break;

		case Keys::S:
			T = translate(0.f, 1.f) * T; // ����� ���� �� ���� �������
			break;

		case Keys::A:
			T = translate(-1.f, 0.f) * T; // ����� ����� �� ���� �������
			break;

		case Keys::D:
			T = translate(1.f, 0.f) * T; // ����� ������ �� ���� �������
			break;

		case Keys::R:
			T = translate(-Wcx, -Wcy) * T; // ������� ������ ��������� � (Wcx, Wcy), ����� �������� ���� �����. ������
			T = rotate(0.05f) * T; // ������� �� 0.01 ������ ������������
			// ������ ������
			T = translate(Wcx, Wcy) * T; // ������� ������ ��������� �������
			break;

		case Keys::Y:
			T = translate(-Wcx, -Wcy) * T; // ������� ������ ��������� � (Wcx, Wcy), ����� �������� ���� �����. ������
			T = rotate(-0.05f) * T; // ������� �� 0.01 ������ ������������
			// ������ ������
			T = translate(Wcx, Wcy) * T; // ������� ������ ��������� �������
			break;

		case Keys::T:
			T = translate(0.f, -10.f) * T; // ����� ����� �� ���� ������
			break;

		case Keys::G:
			T = translate(0.f, 10.f) * T; // ����� ����� �� ���� ������
			break;

		case Keys::F:
			T = translate(-10.f, 0.f) * T; // ����� ����� �� ���� ������
			break;

		case Keys::H:
			T = translate(10.f, 0.f) * T; // ����� ����� �� ���� ������
			break;

		case Keys::Z:
			T = translate(-Wcx, -Wcy) * T;
			T = scale(1.1) * T;
			T = translate(Wcx, Wcy) * T;
			break;

		case Keys::X:
			T = translate(-Wcx, -Wcy) * T;
			T = scale(1 / 1.1) * T;
			T = translate(Wcx, Wcy) * T;
			break;

		case Keys::U:
			T = translate(-Wcx, -Wcy) * T;
			T = mirrorX() * T;
			T = translate(Wcx, Wcy) * T;
			break;

		case Keys::J:
			T = translate(-Wcx, -Wcy) * T;
			T = mirrorY() * T;
			T = translate(Wcx, Wcy) * T;
			break;

		case Keys::I:
			T = translate(-Wcx, -Wcy) * T;
			T = scale(1.1, 1) * T;
			T = translate(Wcx, Wcy) * T;
			break;

		case Keys::K:
			T = translate(-Wcx, -Wcy) * T;
			T = scale(1 / 1.1, 1) * T;
			T = translate(Wcx, Wcy) * T;
			break;

		case Keys::O:
			T = translate(-Wcx, -Wcy) * T;
			T = scale(1, 1.1) * T;
			T = translate(Wcx, Wcy) * T;
			break;

		case Keys::L:
			T = translate(-Wcx, -Wcy) * T;
			T = scale(1, 1 / 1.1) * T;
			T = translate(Wcx, Wcy) * T;
			break;

		case Keys::Escape:
			T = mat3(1.f); // ��������� T ��������� �������
			break;
		default:
			break;
		}

		Refresh();
	}
	private: System::Void openFileDialog_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
	}
	private: System::Void btnOpen_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				// � �������� ������� ������ ������ OK
					// ���������� ����� ����� �� openFileDialog->FileName � fileName
				wchar_t fileName[1024]; // ����������, � ������� ����������� �������� ��� �����
				for (int i = 0; i < openFileDialog->FileName->Length; i++)
					fileName[i] = openFileDialog->FileName[i];
				fileName[openFileDialog->FileName->Length] = '\0';

				// ���������� � �������� �����
				ifstream in;
				in.open(fileName);
				if (in.is_open()) {

					// ���� ������� ������
					figure.clear(); // ������� ��������� ������ �������
					// ��������� ���������� ��� ������ �� �����
					float thickness = 2; // ������� �� ��������� �� ��������� 2
					float r, g, b; // ������������ �����
					r = g = b = 0; // �������� ������������ ����� �� ��������� (������)
					string cmd; // ������ ��� ���������� ����� �������
					// ��������������� ������ � ������
					string str; // ������, � ������� ��������� ������ �����
					getline(in, str); // ��������� �� �������� ����� ������ ������
					while (in) { // ���� ��������� ������ ������� �������
						// ������������ ������
						if ((str.find_first_not_of(" \t\r\n") != string::npos) && (str[0] != '#')) {
							// ����������� ������ �� ����� � �� �����������
							stringstream s(str); // ��������� ����� �� ������ str
							s >> cmd;
							if (cmd == "frame") { // ������� �����������
								s >> Vx >> Vy; // ��������� ���������� �������� Vx � Vy
								aspectFig = Vx / Vy; // ���������� ����������� ������
								float Wx = ClientRectangle.Width; // ������ ���� �� �����������
								float Wy = ClientRectangle.Height; // ������ ���� �� ���������
								float aspectForm = Wx / Wy; // ����������� ������ ���� ���������
								// ����������� ���������� ��� ���������� ��������� ����������� ������
								float S = aspectFig < aspectForm ? Wy / Vy : Wx / Vx;
								float Ty = S * Vy; // �������� � ������������� ������� �� ��� Oy ����� ����� �����
								initT = translate(0.f, Ty) * scale(S, -S); // �������������� ����������� ������ ������
								// ������� ���������������, � ����� �������
									// � initT ��������� ��� ��� ��������������
								T = initT;

							}

							else if (cmd == "color") { // ���� �����
								s >> r >> g >> b; // ��������� ��� ������������ �����

							}
							else if (cmd == "thickness") { // ������� �����
								s >> thickness; // ��������� �������� �������

							}
							else if (cmd == "path") { // ����� �����
								vector<vec2> vertices; // ������ ����� �������
								int N; // ���������� �����
								s >> N;
								string str1; // �������������� ������ ��� ������ �� �����
								while (N > 0) { // ���� �� ��� ����� �������
									getline(in, str1); // ��������� � str1 �� �������� ����� ��������� ������
									// ��� ��� ���� ����������, �� �� ����� ����� ��������� �� �����
									if ((str1.find_first_not_of(" \t\r\n") != string::npos) && (str1[0] != '#')) {
										// ����������� ������ �� ����� � �� �����������
											// ������ � ��� ���� ���������
										float x, y; // ���������� ��� ����������
										stringstream s1(str1); // ��� ���� ��������� ����� �� ������ str1
										s1 >> x >> y;
										vertices.push_back(vec2(x, y)); // ��������� ����� � ������
										N--; // ��������� ������� ����� ��������� ���������� �����

									}

								}
								// ��� ����� �������, ���������� ������� (path) � ������ �� � ������ figure
								figure.push_back(path(vertices, vec3(r, g, b), thickness));
							}

						}
						// ��������� ��������� ������
						getline(in, str);
					}
					Refresh();

				}
			}
		}
		catch (const std::exception& e) {
			string s = e.what();
			cout << s << endl;
		}
	}
	};
}
