#pragma once

namespace CallPrice {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	inline int dateDiff(int nDateStart, int nDateEnd)
	{
	return nDateStart - nDateEnd;
	}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  stockPriceF;
	protected: 

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  voF;


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  strikePriceF;
	private: System::Windows::Forms::TextBox^  freeRateF;




	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::DateTimePicker^  dtpCurrentDate;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::DateTimePicker^  dtpExpirationDate;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  callPriceF;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  pullPriceF;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

	protected: 

	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->stockPriceF = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->voF = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->strikePriceF = (gcnew System::Windows::Forms::TextBox());
			this->freeRateF = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dtpCurrentDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dtpExpirationDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->callPriceF = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->pullPriceF = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// stockPriceF
			// 
			this->stockPriceF->Location = System::Drawing::Point(174, 36);
			this->stockPriceF->Name = L"stockPriceF";
			this->stockPriceF->Size = System::Drawing::Size(138, 20);
			this->stockPriceF->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(42, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 18);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Stock Price:";
			// 
			// voF
			// 
			this->voF->Location = System::Drawing::Point(174, 68);
			this->voF->Name = L"voF";
			this->voF->Size = System::Drawing::Size(138, 20);
			this->voF->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(42, 68);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 18);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Volatility:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(42, 104);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(88, 18);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Strike Price:";
			// 
			// strikePriceF
			// 
			this->strikePriceF->Location = System::Drawing::Point(174, 105);
			this->strikePriceF->Name = L"strikePriceF";
			this->strikePriceF->Size = System::Drawing::Size(138, 20);
			this->strikePriceF->TabIndex = 5;
			// 
			// freeRateF
			// 
			this->freeRateF->BackColor = System::Drawing::SystemColors::Window;
			this->freeRateF->Location = System::Drawing::Point(174, 143);
			this->freeRateF->Name = L"freeRateF";
			this->freeRateF->Size = System::Drawing::Size(138, 20);
			this->freeRateF->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(42, 143);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(111, 18);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Risk Free Rate:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(333, 150);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(112, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"e.g 0.07 instead of 7%";
			// 
			// dtpCurrentDate
			// 
			this->dtpCurrentDate->Location = System::Drawing::Point(174, 180);
			this->dtpCurrentDate->Name = L"dtpCurrentDate";
			this->dtpCurrentDate->Size = System::Drawing::Size(200, 20);
			this->dtpCurrentDate->TabIndex = 9;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(42, 180);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(96, 18);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Current Date:";
			// 
			// dtpExpirationDate
			// 
			this->dtpExpirationDate->Location = System::Drawing::Point(174, 220);
			this->dtpExpirationDate->Name = L"dtpExpirationDate";
			this->dtpExpirationDate->Size = System::Drawing::Size(200, 20);
			this->dtpExpirationDate->TabIndex = 11;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Location = System::Drawing::Point(42, 220);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(112, 18);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Expiration Date:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label8->Location = System::Drawing::Point(42, 263);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(75, 18);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Call Price:";
			// 
			// callPriceF
			// 
			this->callPriceF->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->callPriceF->Location = System::Drawing::Point(174, 264);
			this->callPriceF->Name = L"callPriceF";
			this->callPriceF->Size = System::Drawing::Size(138, 20);
			this->callPriceF->TabIndex = 14;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label9->Location = System::Drawing::Point(42, 303);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(74, 18);
			this->label9->TabIndex = 15;
			this->label9->Text = L"Pull Price:";
			// 
			// pullPriceF
			// 
			this->pullPriceF->BackColor = System::Drawing::Color::Salmon;
			this->pullPriceF->Location = System::Drawing::Point(174, 303);
			this->pullPriceF->Name = L"pullPriceF";
			this->pullPriceF->Size = System::Drawing::Size(138, 20);
			this->pullPriceF->TabIndex = 16;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button1->Location = System::Drawing::Point(369, 280);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(129, 39);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Calculate";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(369, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(129, 83);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 18;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(519, 363);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pullPriceF);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->callPriceF);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->dtpExpirationDate);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->dtpCurrentDate);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->freeRateF);
			this->Controls->Add(this->strikePriceF);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->voF);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->stockPriceF);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		// calculate button
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		// get stock price
		double stockP;
		bool gotStockP = false;
		gotStockP = Double::TryParse(stockPriceF -> Text, stockP); 
		
		//get volatility
		double volatility;
		bool gotVo = false;
		gotVo = Double::TryParse(voF -> Text, volatility);

		//get strike price
		double strikeP;
		bool gotSP = false;
		gotSP = Double::TryParse(strikePriceF -> Text, strikeP);

		// get free risk rate
		double rate;
		bool gotRate = false;
		gotRate = Double::TryParse(freeRateF -> Text, rate);

		// get date difference and divide by 365 to get a fraction of a year.
        System::TimeSpan daysdiff;
        double yearsdiff;
        daysdiff = this->dtpExpirationDate->Value - this->dtpCurrentDate->Value;
        yearsdiff = ((double) daysdiff.Days/ 365.0 );


		// if statement to prevent missing blank space
		if ((!gotStockP) || (!gotVo) || (!gotSP) || (!gotRate)){
			MessageBox::Show("Please enter all the blank space with correct number.");
		}
		//if statemetnt to prevent volatility is expressed as a whole number(instead of a percentage)
		else if (volatility > 1 ){
			MessageBox::Show("Volatility must be percentage. e.g 0.06 instead of 6%");
		}
		//if statemetnt to prevent Expiration Date is before Current Date.
		else if (yearsdiff < 0 ){
			MessageBox::Show("Expiration Date must be equal or greater than Current Date.");
		}
		else{// calculate call price using Black Scholes function and print into callPriceF text field
		callPriceF ->Text = CallPrice::BlackScholes(stockP,strikeP,yearsdiff,rate,volatility).ToString(".0000");

		// calculate pull price using Black Scholes P function and print into pullPriceF text field
		pullPriceF ->Text = CallPrice::BlackScholesP(stockP,strikeP,yearsdiff,rate,volatility).ToString(".0000");
		}//end of if statement

	}//end of calculate button


};
}
