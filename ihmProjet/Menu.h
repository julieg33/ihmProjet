#pragma once

namespace ihmProjet {

	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{

			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
			
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ buttonEmploye;

	private: System::Windows::Forms::Button^ buttonClient;
	private: System::Windows::Forms::Button^ buttonCommande;
	private: System::Windows::Forms::Button^ buttonStock;
	private: System::Windows::Forms::Button^ buttonStatistiques;
	private: System::Windows::Forms::Button^ buttonSimulation;
	
	private: System::Windows::Forms::Panel^ panelMenu;
	private: System::Windows::Forms::Panel^ panelEmploye;
	private: System::Windows::Forms::Label^ labelEmploye;
	private: System::Windows::Forms::Button^ bAjouter_p1;
	private: System::Windows::Forms::Button^ bMaj_p1;
	private: System::Windows::Forms::Button^ bSupprimer_p1;
	private: System::Windows::Forms::TextBox^ tVille_p1;

	private: System::Windows::Forms::TextBox^ tCodePostal_p1;

	private: System::Windows::Forms::TextBox^ tNomVoie_p1;

	private: System::Windows::Forms::TextBox^ tCompAdresse_p1;

	private: System::Windows::Forms::TextBox^ tNumVoie_p1;

	private: System::Windows::Forms::TextBox^ tPrenomSuperieur_p1;


	private: System::Windows::Forms::TextBox^ tNomSuperieur_p1;
	private: System::Windows::Forms::TextBox^ tPrenom_p1;


	private: System::Windows::Forms::TextBox^ tNom_p1;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridView^ dEmploye_p1;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ tTypeVoie_p1;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Panel^ panelClient;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::DataGridView^ dClient_p2;
	private: System::Windows::Forms::DataGridView^ dAdresse_p2;


	private: System::Windows::Forms::TextBox^ tTypeVoie_p2;

	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Button^ bAjouter_p2;

	private: System::Windows::Forms::Button^ bMaj_p2;
	private: System::Windows::Forms::Button^ bSupprimer_p2;


	private: System::Windows::Forms::TextBox^ tVille_p2;

	private: System::Windows::Forms::TextBox^ tCodePostal_p2;

	private: System::Windows::Forms::TextBox^ tNomVoie_p2;

	private: System::Windows::Forms::TextBox^ tCompAdresse_p2;

	private: System::Windows::Forms::TextBox^ tNumVoie_p2;

	private: System::Windows::Forms::TextBox^ tPrenom_p2;



	private: System::Windows::Forms::TextBox^ tNom_p2;

	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;


	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Button^ bRechecher_p2;

	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::TextBox^ tNumClient_p2;
private: System::Windows::Forms::TextBox^ tDateNaissance_p2;




	private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::Button^ bRetour_p1;
private: System::Windows::Forms::Button^ bRetour_p2;



	protected:


	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;



#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>


		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->buttonEmploye = (gcnew System::Windows::Forms::Button());
			this->buttonClient = (gcnew System::Windows::Forms::Button());
			this->buttonCommande = (gcnew System::Windows::Forms::Button());
			this->buttonStock = (gcnew System::Windows::Forms::Button());
			this->buttonStatistiques = (gcnew System::Windows::Forms::Button());
			this->buttonSimulation = (gcnew System::Windows::Forms::Button());
			this->panelMenu = (gcnew System::Windows::Forms::Panel());
			this->panelEmploye = (gcnew System::Windows::Forms::Panel());
			this->bRetour_p1 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->tTypeVoie_p1 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->bAjouter_p1 = (gcnew System::Windows::Forms::Button());
			this->bMaj_p1 = (gcnew System::Windows::Forms::Button());
			this->bSupprimer_p1 = (gcnew System::Windows::Forms::Button());
			this->tVille_p1 = (gcnew System::Windows::Forms::TextBox());
			this->tCodePostal_p1 = (gcnew System::Windows::Forms::TextBox());
			this->tNomVoie_p1 = (gcnew System::Windows::Forms::TextBox());
			this->tCompAdresse_p1 = (gcnew System::Windows::Forms::TextBox());
			this->tNumVoie_p1 = (gcnew System::Windows::Forms::TextBox());
			this->tPrenomSuperieur_p1 = (gcnew System::Windows::Forms::TextBox());
			this->tNomSuperieur_p1 = (gcnew System::Windows::Forms::TextBox());
			this->tPrenom_p1 = (gcnew System::Windows::Forms::TextBox());
			this->tNom_p1 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dEmploye_p1 = (gcnew System::Windows::Forms::DataGridView());
			this->labelEmploye = (gcnew System::Windows::Forms::Label());
			this->panelClient = (gcnew System::Windows::Forms::Panel());
			this->bRetour_p2 = (gcnew System::Windows::Forms::Button());
			this->bRechecher_p2 = (gcnew System::Windows::Forms::Button());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->tNumClient_p2 = (gcnew System::Windows::Forms::TextBox());
			this->tDateNaissance_p2 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->tTypeVoie_p2 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->bAjouter_p2 = (gcnew System::Windows::Forms::Button());
			this->bMaj_p2 = (gcnew System::Windows::Forms::Button());
			this->bSupprimer_p2 = (gcnew System::Windows::Forms::Button());
			this->tVille_p2 = (gcnew System::Windows::Forms::TextBox());
			this->tCodePostal_p2 = (gcnew System::Windows::Forms::TextBox());
			this->tNomVoie_p2 = (gcnew System::Windows::Forms::TextBox());
			this->tCompAdresse_p2 = (gcnew System::Windows::Forms::TextBox());
			this->tNumVoie_p2 = (gcnew System::Windows::Forms::TextBox());
			this->tPrenom_p2 = (gcnew System::Windows::Forms::TextBox());
			this->tNom_p2 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->dClient_p2 = (gcnew System::Windows::Forms::DataGridView());
			this->dAdresse_p2 = (gcnew System::Windows::Forms::DataGridView());
			this->panelMenu->SuspendLayout();
			this->panelEmploye->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dEmploye_p1))->BeginInit();
			this->panelClient->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dClient_p2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dAdresse_p2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(8, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(999, 224);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Bienvenu dans votre logiciel de gestion";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(147, 350);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(267, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Choisissez le menu auquel accéder :";
			// 
			// buttonEmploye
			// 
			this->buttonEmploye->Location = System::Drawing::Point(464, 252);
			this->buttonEmploye->Name = L"buttonEmploye";
			this->buttonEmploye->Size = System::Drawing::Size(109, 25);
			this->buttonEmploye->TabIndex = 2;
			this->buttonEmploye->Text = L"Employé";
			this->buttonEmploye->UseVisualStyleBackColor = true;
			this->buttonEmploye->Click += gcnew System::EventHandler(this, &MyForm::buttonEmploye_Click);
			// 
			// buttonClient
			// 
			this->buttonClient->Location = System::Drawing::Point(464, 283);
			this->buttonClient->Name = L"buttonClient";
			this->buttonClient->Size = System::Drawing::Size(109, 25);
			this->buttonClient->TabIndex = 3;
			this->buttonClient->Text = L"Client";
			this->buttonClient->UseVisualStyleBackColor = true;
			this->buttonClient->Click += gcnew System::EventHandler(this, &MyForm::buttonClient_Click);
			// 
			// buttonCommande
			// 
			this->buttonCommande->Location = System::Drawing::Point(464, 314);
			this->buttonCommande->Name = L"buttonCommande";
			this->buttonCommande->Size = System::Drawing::Size(109, 25);
			this->buttonCommande->TabIndex = 4;
			this->buttonCommande->Text = L"Commande";
			this->buttonCommande->UseVisualStyleBackColor = true;
			// 
			// buttonStock
			// 
			this->buttonStock->Location = System::Drawing::Point(464, 345);
			this->buttonStock->Name = L"buttonStock";
			this->buttonStock->Size = System::Drawing::Size(109, 25);
			this->buttonStock->TabIndex = 5;
			this->buttonStock->Text = L"Stock";
			this->buttonStock->UseVisualStyleBackColor = true;
			// 
			// buttonStatistiques
			// 
			this->buttonStatistiques->Location = System::Drawing::Point(464, 376);
			this->buttonStatistiques->Name = L"buttonStatistiques";
			this->buttonStatistiques->Size = System::Drawing::Size(109, 25);
			this->buttonStatistiques->TabIndex = 6;
			this->buttonStatistiques->Text = L"Statistiques";
			this->buttonStatistiques->UseVisualStyleBackColor = true;
			// 
			// buttonSimulation
			// 
			this->buttonSimulation->Location = System::Drawing::Point(464, 407);
			this->buttonSimulation->Name = L"buttonSimulation";
			this->buttonSimulation->Size = System::Drawing::Size(109, 25);
			this->buttonSimulation->TabIndex = 7;
			this->buttonSimulation->Text = L"Simulation";
			this->buttonSimulation->UseVisualStyleBackColor = true;
			// 
			// panelMenu
			// 
			this->panelMenu->Controls->Add(this->buttonSimulation);
			this->panelMenu->Controls->Add(this->label1);
			this->panelMenu->Controls->Add(this->buttonStatistiques);
			this->panelMenu->Controls->Add(this->buttonStock);
			this->panelMenu->Controls->Add(this->buttonCommande);
			this->panelMenu->Controls->Add(this->buttonClient);
			this->panelMenu->Controls->Add(this->buttonEmploye);
			this->panelMenu->Controls->Add(this->label2);
			this->panelMenu->Location = System::Drawing::Point(4, 3);
			this->panelMenu->Name = L"panelMenu";
			this->panelMenu->Size = System::Drawing::Size(1025, 547);
			this->panelMenu->TabIndex = 8;
			// 
			// panelEmploye
			// 
			this->panelEmploye->Controls->Add(this->bRetour_p1);
			this->panelEmploye->Controls->Add(this->label9);
			this->panelEmploye->Controls->Add(this->tTypeVoie_p1);
			this->panelEmploye->Controls->Add(this->label14);
			this->panelEmploye->Controls->Add(this->bAjouter_p1);
			this->panelEmploye->Controls->Add(this->bMaj_p1);
			this->panelEmploye->Controls->Add(this->bSupprimer_p1);
			this->panelEmploye->Controls->Add(this->tVille_p1);
			this->panelEmploye->Controls->Add(this->tCodePostal_p1);
			this->panelEmploye->Controls->Add(this->tNomVoie_p1);
			this->panelEmploye->Controls->Add(this->tCompAdresse_p1);
			this->panelEmploye->Controls->Add(this->tNumVoie_p1);
			this->panelEmploye->Controls->Add(this->tPrenomSuperieur_p1);
			this->panelEmploye->Controls->Add(this->tNomSuperieur_p1);
			this->panelEmploye->Controls->Add(this->tPrenom_p1);
			this->panelEmploye->Controls->Add(this->tNom_p1);
			this->panelEmploye->Controls->Add(this->label13);
			this->panelEmploye->Controls->Add(this->label12);
			this->panelEmploye->Controls->Add(this->label11);
			this->panelEmploye->Controls->Add(this->label10);
			this->panelEmploye->Controls->Add(this->label8);
			this->panelEmploye->Controls->Add(this->label7);
			this->panelEmploye->Controls->Add(this->label6);
			this->panelEmploye->Controls->Add(this->label5);
			this->panelEmploye->Controls->Add(this->label4);
			this->panelEmploye->Controls->Add(this->dEmploye_p1);
			this->panelEmploye->Controls->Add(this->labelEmploye);
			this->panelEmploye->Location = System::Drawing::Point(4, 3);
			this->panelEmploye->Name = L"panelEmploye";
			this->panelEmploye->Size = System::Drawing::Size(1034, 538);
			this->panelEmploye->TabIndex = 9;
			// 
			// bRetour_p1
			// 
			this->bRetour_p1->Location = System::Drawing::Point(1, -3);
			this->bRetour_p1->Name = L"bRetour_p1";
			this->bRetour_p1->Size = System::Drawing::Size(37, 23);
			this->bRetour_p1->TabIndex = 58;
			this->bRetour_p1->Text = L"<<";
			this->bRetour_p1->UseVisualStyleBackColor = true;
			this->bRetour_p1->Click += gcnew System::EventHandler(this, &MyForm::bRetour_p1_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(333, 11);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(47, 13);
			this->label9->TabIndex = 27;
			this->label9->Text = L"Employé";
			// 
			// tTypeVoie_p1
			// 
			this->tTypeVoie_p1->Location = System::Drawing::Point(14, 249);
			this->tTypeVoie_p1->Name = L"tTypeVoie_p1";
			this->tTypeVoie_p1->Size = System::Drawing::Size(110, 20);
			this->tTypeVoie_p1->TabIndex = 26;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(11, 232);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(69, 13);
			this->label14->TabIndex = 25;
			this->label14->Text = L"Type de voie";
			// 
			// bAjouter_p1
			// 
			this->bAjouter_p1->Location = System::Drawing::Point(155, 370);
			this->bAjouter_p1->Name = L"bAjouter_p1";
			this->bAjouter_p1->Size = System::Drawing::Size(66, 110);
			this->bAjouter_p1->TabIndex = 24;
			this->bAjouter_p1->Text = L"Ajouter";
			this->bAjouter_p1->UseVisualStyleBackColor = true;
			// 
			// bMaj_p1
			// 
			this->bMaj_p1->Location = System::Drawing::Point(70, 370);
			this->bMaj_p1->Name = L"bMaj_p1";
			this->bMaj_p1->Size = System::Drawing::Size(75, 51);
			this->bMaj_p1->TabIndex = 23;
			this->bMaj_p1->Text = L"Mise à jour";
			this->bMaj_p1->UseVisualStyleBackColor = true;
			// 
			// bSupprimer_p1
			// 
			this->bSupprimer_p1->Location = System::Drawing::Point(70, 427);
			this->bSupprimer_p1->Name = L"bSupprimer_p1";
			this->bSupprimer_p1->Size = System::Drawing::Size(75, 53);
			this->bSupprimer_p1->TabIndex = 22;
			this->bSupprimer_p1->Text = L"Supprimer";
			this->bSupprimer_p1->UseVisualStyleBackColor = true;
			// 
			// tVille_p1
			// 
			this->tVille_p1->Location = System::Drawing::Point(148, 299);
			this->tVille_p1->Name = L"tVille_p1";
			this->tVille_p1->Size = System::Drawing::Size(110, 20);
			this->tVille_p1->TabIndex = 21;
			// 
			// tCodePostal_p1
			// 
			this->tCodePostal_p1->Location = System::Drawing::Point(14, 299);
			this->tCodePostal_p1->Name = L"tCodePostal_p1";
			this->tCodePostal_p1->Size = System::Drawing::Size(110, 20);
			this->tCodePostal_p1->TabIndex = 20;
			// 
			// tNomVoie_p1
			// 
			this->tNomVoie_p1->Location = System::Drawing::Point(149, 249);
			this->tNomVoie_p1->Name = L"tNomVoie_p1";
			this->tNomVoie_p1->Size = System::Drawing::Size(110, 20);
			this->tNomVoie_p1->TabIndex = 19;
			// 
			// tCompAdresse_p1
			// 
			this->tCompAdresse_p1->Location = System::Drawing::Point(148, 199);
			this->tCompAdresse_p1->Name = L"tCompAdresse_p1";
			this->tCompAdresse_p1->Size = System::Drawing::Size(110, 20);
			this->tCompAdresse_p1->TabIndex = 18;
			// 
			// tNumVoie_p1
			// 
			this->tNumVoie_p1->Location = System::Drawing::Point(14, 199);
			this->tNumVoie_p1->Name = L"tNumVoie_p1";
			this->tNumVoie_p1->Size = System::Drawing::Size(110, 20);
			this->tNumVoie_p1->TabIndex = 17;
			// 
			// tPrenomSuperieur_p1
			// 
			this->tPrenomSuperieur_p1->Location = System::Drawing::Point(148, 112);
			this->tPrenomSuperieur_p1->Name = L"tPrenomSuperieur_p1";
			this->tPrenomSuperieur_p1->Size = System::Drawing::Size(111, 20);
			this->tPrenomSuperieur_p1->TabIndex = 15;
			// 
			// tNomSuperieur_p1
			// 
			this->tNomSuperieur_p1->Location = System::Drawing::Point(149, 60);
			this->tNomSuperieur_p1->Name = L"tNomSuperieur_p1";
			this->tNomSuperieur_p1->Size = System::Drawing::Size(110, 20);
			this->tNomSuperieur_p1->TabIndex = 14;
			// 
			// tPrenom_p1
			// 
			this->tPrenom_p1->Location = System::Drawing::Point(14, 112);
			this->tPrenom_p1->Name = L"tPrenom_p1";
			this->tPrenom_p1->Size = System::Drawing::Size(110, 20);
			this->tPrenom_p1->TabIndex = 13;
			// 
			// tNom_p1
			// 
			this->tNom_p1->Location = System::Drawing::Point(14, 60);
			this->tNom_p1->Name = L"tNom_p1";
			this->tNom_p1->Size = System::Drawing::Size(110, 20);
			this->tNom_p1->TabIndex = 12;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(148, 283);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(26, 13);
			this->label13->TabIndex = 11;
			this->label13->Text = L"Ville";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(11, 283);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(63, 13);
			this->label12->TabIndex = 10;
			this->label12->Text = L"Code postal";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(146, 179);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(113, 13);
			this->label11->TabIndex = 9;
			this->label11->Text = L"Complément d\'adresse";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(11, 179);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(82, 13);
			this->label10->TabIndex = 8;
			this->label10->Text = L"Numéro de voie";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(146, 232);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(67, 13);
			this->label8->TabIndex = 6;
			this->label8->Text = L"Nom de voie";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(146, 96);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(89, 13);
			this->label7->TabIndex = 5;
			this->label7->Text = L"Prénom supérieur";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(146, 44);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(75, 13);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Nom supérieur";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(11, 96);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(43, 13);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Prénom";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(11, 44);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(29, 13);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Nom";
			// 
			// dEmploye_p1
			// 
			this->dEmploye_p1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dEmploye_p1->Location = System::Drawing::Point(336, 27);
			this->dEmploye_p1->Name = L"dEmploye_p1";
			this->dEmploye_p1->Size = System::Drawing::Size(686, 508);
			this->dEmploye_p1->TabIndex = 1;
			// 
			// labelEmploye
			// 
			this->labelEmploye->AutoSize = true;
			this->labelEmploye->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelEmploye->Location = System::Drawing::Point(76, 1);
			this->labelEmploye->Name = L"labelEmploye";
			this->labelEmploye->Size = System::Drawing::Size(114, 20);
			this->labelEmploye->TabIndex = 0;
			this->labelEmploye->Text = L"Menu Employé";
			// 
			// panelClient
			// 
			this->panelClient->Controls->Add(this->bRetour_p2);
			this->panelClient->Controls->Add(this->bRechecher_p2);
			this->panelClient->Controls->Add(this->label23);
			this->panelClient->Controls->Add(this->tNumClient_p2);
			this->panelClient->Controls->Add(this->tDateNaissance_p2);
			this->panelClient->Controls->Add(this->label24);
			this->panelClient->Controls->Add(this->tTypeVoie_p2);
			this->panelClient->Controls->Add(this->label17);
			this->panelClient->Controls->Add(this->bAjouter_p2);
			this->panelClient->Controls->Add(this->bMaj_p2);
			this->panelClient->Controls->Add(this->bSupprimer_p2);
			this->panelClient->Controls->Add(this->tVille_p2);
			this->panelClient->Controls->Add(this->tCodePostal_p2);
			this->panelClient->Controls->Add(this->tNomVoie_p2);
			this->panelClient->Controls->Add(this->tCompAdresse_p2);
			this->panelClient->Controls->Add(this->tNumVoie_p2);
			this->panelClient->Controls->Add(this->tPrenom_p2);
			this->panelClient->Controls->Add(this->tNom_p2);
			this->panelClient->Controls->Add(this->label18);
			this->panelClient->Controls->Add(this->label19);
			this->panelClient->Controls->Add(this->label20);
			this->panelClient->Controls->Add(this->label21);
			this->panelClient->Controls->Add(this->label22);
			this->panelClient->Controls->Add(this->label25);
			this->panelClient->Controls->Add(this->label26);
			this->panelClient->Controls->Add(this->label27);
			this->panelClient->Controls->Add(this->label16);
			this->panelClient->Controls->Add(this->label15);
			this->panelClient->Controls->Add(this->dClient_p2);
			this->panelClient->Controls->Add(this->dAdresse_p2);
			this->panelClient->Location = System::Drawing::Point(1, 3);
			this->panelClient->Name = L"panelClient";
			this->panelClient->Size = System::Drawing::Size(1037, 553);
			this->panelClient->TabIndex = 10;
			// 
			// bRetour_p2
			// 
			this->bRetour_p2->Location = System::Drawing::Point(3, 4);
			this->bRetour_p2->Name = L"bRetour_p2";
			this->bRetour_p2->Size = System::Drawing::Size(37, 23);
			this->bRetour_p2->TabIndex = 57;
			this->bRetour_p2->Text = L"<<";
			this->bRetour_p2->UseVisualStyleBackColor = true;
			this->bRetour_p2->Click += gcnew System::EventHandler(this, &MyForm::bRetour_p2_Click);
			// 
			// bRechecher_p2
			// 
			this->bRechecher_p2->Location = System::Drawing::Point(95, 92);
			this->bRechecher_p2->Name = L"bRechecher_p2";
			this->bRechecher_p2->Size = System::Drawing::Size(76, 20);
			this->bRechecher_p2->TabIndex = 56;
			this->bRechecher_p2->Text = L"Rechercher";
			this->bRechecher_p2->UseVisualStyleBackColor = true;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(102, 50);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(62, 13);
			this->label23->TabIndex = 55;
			this->label23->Text = L"N° de client";
			// 
			// tNumClient_p2
			// 
			this->tNumClient_p2->Location = System::Drawing::Point(79, 66);
			this->tNumClient_p2->Name = L"tNumClient_p2";
			this->tNumClient_p2->Size = System::Drawing::Size(110, 20);
			this->tNumClient_p2->TabIndex = 54;
			// 
			// tDateNaissance_p2
			// 
			this->tDateNaissance_p2->Location = System::Drawing::Point(14, 208);
			this->tDateNaissance_p2->Name = L"tDateNaissance_p2";
			this->tDateNaissance_p2->Size = System::Drawing::Size(110, 20);
			this->tDateNaissance_p2->TabIndex = 53;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(11, 192);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(96, 13);
			this->label24->TabIndex = 51;
			this->label24->Text = L"Date de naissance";
			// 
			// tTypeVoie_p2
			// 
			this->tTypeVoie_p2->Location = System::Drawing::Point(14, 331);
			this->tTypeVoie_p2->Name = L"tTypeVoie_p2";
			this->tTypeVoie_p2->Size = System::Drawing::Size(110, 20);
			this->tTypeVoie_p2->TabIndex = 50;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(11, 314);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(69, 13);
			this->label17->TabIndex = 49;
			this->label17->Text = L"Type de voie";
			// 
			// bAjouter_p2
			// 
			this->bAjouter_p2->Location = System::Drawing::Point(151, 431);
			this->bAjouter_p2->Name = L"bAjouter_p2";
			this->bAjouter_p2->Size = System::Drawing::Size(66, 110);
			this->bAjouter_p2->TabIndex = 48;
			this->bAjouter_p2->Text = L"Ajouter";
			this->bAjouter_p2->UseVisualStyleBackColor = true;
			// 
			// bMaj_p2
			// 
			this->bMaj_p2->Location = System::Drawing::Point(66, 431);
			this->bMaj_p2->Name = L"bMaj_p2";
			this->bMaj_p2->Size = System::Drawing::Size(75, 51);
			this->bMaj_p2->TabIndex = 47;
			this->bMaj_p2->Text = L"Mise à jour";
			this->bMaj_p2->UseVisualStyleBackColor = true;
			// 
			// bSupprimer_p2
			// 
			this->bSupprimer_p2->Location = System::Drawing::Point(66, 488);
			this->bSupprimer_p2->Name = L"bSupprimer_p2";
			this->bSupprimer_p2->Size = System::Drawing::Size(75, 53);
			this->bSupprimer_p2->TabIndex = 46;
			this->bSupprimer_p2->Text = L"Supprimer";
			this->bSupprimer_p2->UseVisualStyleBackColor = true;
			// 
			// tVille_p2
			// 
			this->tVille_p2->Location = System::Drawing::Point(148, 381);
			this->tVille_p2->Name = L"tVille_p2";
			this->tVille_p2->Size = System::Drawing::Size(110, 20);
			this->tVille_p2->TabIndex = 45;
			// 
			// tCodePostal_p2
			// 
			this->tCodePostal_p2->Location = System::Drawing::Point(14, 381);
			this->tCodePostal_p2->Name = L"tCodePostal_p2";
			this->tCodePostal_p2->Size = System::Drawing::Size(110, 20);
			this->tCodePostal_p2->TabIndex = 44;
			// 
			// tNomVoie_p2
			// 
			this->tNomVoie_p2->Location = System::Drawing::Point(149, 331);
			this->tNomVoie_p2->Name = L"tNomVoie_p2";
			this->tNomVoie_p2->Size = System::Drawing::Size(110, 20);
			this->tNomVoie_p2->TabIndex = 43;
			// 
			// tCompAdresse_p2
			// 
			this->tCompAdresse_p2->Location = System::Drawing::Point(148, 281);
			this->tCompAdresse_p2->Name = L"tCompAdresse_p2";
			this->tCompAdresse_p2->Size = System::Drawing::Size(110, 20);
			this->tCompAdresse_p2->TabIndex = 42;
			// 
			// tNumVoie_p2
			// 
			this->tNumVoie_p2->Location = System::Drawing::Point(14, 281);
			this->tNumVoie_p2->Name = L"tNumVoie_p2";
			this->tNumVoie_p2->Size = System::Drawing::Size(110, 20);
			this->tNumVoie_p2->TabIndex = 41;
			// 
			// tPrenom_p2
			// 
			this->tPrenom_p2->Location = System::Drawing::Point(148, 142);
			this->tPrenom_p2->Name = L"tPrenom_p2";
			this->tPrenom_p2->Size = System::Drawing::Size(110, 20);
			this->tPrenom_p2->TabIndex = 38;
			// 
			// tNom_p2
			// 
			this->tNom_p2->Location = System::Drawing::Point(14, 142);
			this->tNom_p2->Name = L"tNom_p2";
			this->tNom_p2->Size = System::Drawing::Size(110, 20);
			this->tNom_p2->TabIndex = 37;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(148, 365);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(26, 13);
			this->label18->TabIndex = 36;
			this->label18->Text = L"Ville";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(11, 365);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(63, 13);
			this->label19->TabIndex = 35;
			this->label19->Text = L"Code postal";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(146, 261);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(113, 13);
			this->label20->TabIndex = 34;
			this->label20->Text = L"Complément d\'adresse";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(11, 261);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(82, 13);
			this->label21->TabIndex = 33;
			this->label21->Text = L"Numéro de voie";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(146, 314);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(67, 13);
			this->label22->TabIndex = 32;
			this->label22->Text = L"Nom de voie";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(146, 126);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(43, 13);
			this->label25->TabIndex = 29;
			this->label25->Text = L"Prénom";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(11, 126);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(29, 13);
			this->label26->TabIndex = 28;
			this->label26->Text = L"Nom";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(91, 7);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(93, 20);
			this->label27->TabIndex = 27;
			this->label27->Text = L"Menu Client";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(359, 294);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(45, 13);
			this->label16->TabIndex = 4;
			this->label16->Text = L"Adresse";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(359, 12);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(33, 13);
			this->label15->TabIndex = 3;
			this->label15->Text = L"Client";
			// 
			// dClient_p2
			// 
			this->dClient_p2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dClient_p2->Location = System::Drawing::Point(362, 28);
			this->dClient_p2->Name = L"dClient_p2";
			this->dClient_p2->Size = System::Drawing::Size(667, 242);
			this->dClient_p2->TabIndex = 2;
			// 
			// dAdresse_p2
			// 
			this->dAdresse_p2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dAdresse_p2->Location = System::Drawing::Point(362, 310);
			this->dAdresse_p2->Name = L"dAdresse_p2";
			this->dAdresse_p2->Size = System::Drawing::Size(667, 234);
			this->dAdresse_p2->TabIndex = 1;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1044, 562);
			this->Controls->Add(this->panelEmploye);
			this->Controls->Add(this->panelMenu);
			this->Controls->Add(this->panelClient);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panelMenu->ResumeLayout(false);
			this->panelMenu->PerformLayout();
			this->panelEmploye->ResumeLayout(false);
			this->panelEmploye->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dEmploye_p1))->EndInit();
			this->panelClient->ResumeLayout(false);
			this->panelClient->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dClient_p2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dAdresse_p2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->panelEmploye->Hide();
		this->panelClient->Hide();
	}



	private: System::Void buttonEmploye_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panelEmploye->Show();

	}
private: System::Void bRetour_p1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->panelEmploye->Hide();
	this->panelMenu->Show();
	
}

	   private: System::Void buttonClient_Click(System::Object^ sender, System::EventArgs^ e) {
		   this->panelMenu->Hide();
		   this->panelClient->Show();
	   }

private: System::Void bRetour_p2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->panelClient->Hide();
	this->panelMenu->Show();
}


};
}


/*
			this->panelEmploye->Hide(); 
			this->panelMenu->Hide();



*/