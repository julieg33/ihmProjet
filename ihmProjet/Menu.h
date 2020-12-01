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
private: System::Windows::Forms::Panel^ panelCommande;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::RichTextBox^ tBoxReponse_p1;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::RichTextBox^ tBoxMessage_p2;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::RichTextBox^ tBoxMessage_p3;

private: System::Windows::Forms::Button^ bRetour_p3;
private: System::Windows::Forms::Button^ bRechercherCommande_p3;


private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::TextBox^ tRechercheCommande_p3;
private: System::Windows::Forms::TextBox^ tDernierSolde_p3;


private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::Button^ bAjouter_p3;



private: System::Windows::Forms::Button^ bMaj_p3;
private: System::Windows::Forms::Button^ bSupprimer_p3;


private: System::Windows::Forms::TextBox^ tQuantiteArticle_p3;

private: System::Windows::Forms::TextBox^ tRefArticle_p3;

private: System::Windows::Forms::TextBox^ tComplementLivraison_p3;


private: System::Windows::Forms::TextBox^ tNumVoieLivraison_p3;

private: System::Windows::Forms::TextBox^ tPrenom_p3;

private: System::Windows::Forms::TextBox^ tNom_p3;

private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::Label^ label35;

private: System::Windows::Forms::Label^ label37;

private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::Label^ label40;
private: System::Windows::Forms::Label^ label41;
private: System::Windows::Forms::Label^ label42;
private: System::Windows::Forms::Label^ label43;
private: System::Windows::Forms::DataGridView^ dCommande;
private: System::Windows::Forms::DataGridView^ dDetailCommande_p3;
private: System::Windows::Forms::Label^ label44;
private: System::Windows::Forms::DataGridView^ dDetailPaiement_p3;
private: System::Windows::Forms::Label^ label48;
private: System::Windows::Forms::Label^ label47;
private: System::Windows::Forms::Label^ label46;

private: System::Windows::Forms::Label^ label45;
private: System::Windows::Forms::TextBox^ tMoyenPaiement_p3;

private: System::Windows::Forms::TextBox^ tDatePaiement_p3;

private: System::Windows::Forms::Label^ label49;
private: System::Windows::Forms::Label^ label50;
private: System::Windows::Forms::TextBox^ tTypeVoieFacturation_p3;

private: System::Windows::Forms::Label^ label64;
private: System::Windows::Forms::TextBox^ tVilleFacturation_p3;

private: System::Windows::Forms::Label^ label65;
private: System::Windows::Forms::TextBox^ tCodePostalFacturation_p3;

private: System::Windows::Forms::Label^ label66;
private: System::Windows::Forms::Label^ label67;
private: System::Windows::Forms::TextBox^ tNomVoieFacturation_p3;

private: System::Windows::Forms::Label^ label68;
private: System::Windows::Forms::TextBox^ tComplementFacturation_p3;

private: System::Windows::Forms::TextBox^ tNumVoieFacturation_p3;

private: System::Windows::Forms::Label^ label69;
private: System::Windows::Forms::TextBox^ tTypeVoieLivraison_p3;

private: System::Windows::Forms::Label^ label63;
private: System::Windows::Forms::Label^ label59;
private: System::Windows::Forms::TextBox^ tVilleLivraison_p3;

private: System::Windows::Forms::Label^ label56;
private: System::Windows::Forms::TextBox^ tCodePostalLivraison_p3;

private: System::Windows::Forms::Label^ label55;
private: System::Windows::Forms::Label^ label33;

private: System::Windows::Forms::Label^ label51;
private: System::Windows::Forms::TextBox^ tNomVoieLivraison_p3;


private: System::Windows::Forms::TextBox^ tDateLivraison_p3;


private: System::Windows::Forms::Label^ label54;
private: System::Windows::Forms::Panel^ panelStock;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::RichTextBox^ tBoxMessage_p4;

private: System::Windows::Forms::Button^ bRetour_p4;

private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::TextBox^ tTauxTVA_p4;

private: System::Windows::Forms::Label^ label52;
private: System::Windows::Forms::Button^ bAjouter_p4;

private: System::Windows::Forms::Button^ bMaj_p4;
private: System::Windows::Forms::Button^ bSupprimer_p4;


private: System::Windows::Forms::TextBox^ tPrixHT_p4;




private: System::Windows::Forms::TextBox^ tSeuilReap_p4;
private: System::Windows::Forms::TextBox^ tQuantiteStock_p4;


private: System::Windows::Forms::TextBox^ tDesignation_p4;


private: System::Windows::Forms::TextBox^ tReferenceArticle_p4;



private: System::Windows::Forms::Label^ label58;
private: System::Windows::Forms::Label^ label60;

private: System::Windows::Forms::Label^ label62;

private: System::Windows::Forms::Label^ label71;
private: System::Windows::Forms::Label^ label72;
private: System::Windows::Forms::DataGridView^ dArticle_p4;

private: System::Windows::Forms::Label^ label73;
private: System::Windows::Forms::Button^ bRechercheArticle_p4;
private: System::Windows::Forms::Panel^ panelStatistiques;









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
			this->panelCommande = (gcnew System::Windows::Forms::Panel());
			this->tTypeVoieFacturation_p3 = (gcnew System::Windows::Forms::TextBox());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->tVilleFacturation_p3 = (gcnew System::Windows::Forms::TextBox());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->tCodePostalFacturation_p3 = (gcnew System::Windows::Forms::TextBox());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->tNomVoieFacturation_p3 = (gcnew System::Windows::Forms::TextBox());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->tComplementFacturation_p3 = (gcnew System::Windows::Forms::TextBox());
			this->tNumVoieFacturation_p3 = (gcnew System::Windows::Forms::TextBox());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->tTypeVoieLivraison_p3 = (gcnew System::Windows::Forms::TextBox());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->tVilleLivraison_p3 = (gcnew System::Windows::Forms::TextBox());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->tCodePostalLivraison_p3 = (gcnew System::Windows::Forms::TextBox());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->tNomVoieLivraison_p3 = (gcnew System::Windows::Forms::TextBox());
			this->tDateLivraison_p3 = (gcnew System::Windows::Forms::TextBox());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->tMoyenPaiement_p3 = (gcnew System::Windows::Forms::TextBox());
			this->tDatePaiement_p3 = (gcnew System::Windows::Forms::TextBox());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->dDetailPaiement_p3 = (gcnew System::Windows::Forms::DataGridView());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->tBoxMessage_p3 = (gcnew System::Windows::Forms::RichTextBox());
			this->bRetour_p3 = (gcnew System::Windows::Forms::Button());
			this->bRechercherCommande_p3 = (gcnew System::Windows::Forms::Button());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->tRechercheCommande_p3 = (gcnew System::Windows::Forms::TextBox());
			this->tDernierSolde_p3 = (gcnew System::Windows::Forms::TextBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->bAjouter_p3 = (gcnew System::Windows::Forms::Button());
			this->bMaj_p3 = (gcnew System::Windows::Forms::Button());
			this->bSupprimer_p3 = (gcnew System::Windows::Forms::Button());
			this->tQuantiteArticle_p3 = (gcnew System::Windows::Forms::TextBox());
			this->tRefArticle_p3 = (gcnew System::Windows::Forms::TextBox());
			this->tComplementLivraison_p3 = (gcnew System::Windows::Forms::TextBox());
			this->tNumVoieLivraison_p3 = (gcnew System::Windows::Forms::TextBox());
			this->tPrenom_p3 = (gcnew System::Windows::Forms::TextBox());
			this->tNom_p3 = (gcnew System::Windows::Forms::TextBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->dCommande = (gcnew System::Windows::Forms::DataGridView());
			this->dDetailCommande_p3 = (gcnew System::Windows::Forms::DataGridView());
			this->panelEmploye = (gcnew System::Windows::Forms::Panel());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->tBoxReponse_p1 = (gcnew System::Windows::Forms::RichTextBox());
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
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->tBoxMessage_p2 = (gcnew System::Windows::Forms::RichTextBox());
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
			this->panelStock = (gcnew System::Windows::Forms::Panel());
			this->bRechercheArticle_p4 = (gcnew System::Windows::Forms::Button());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->tBoxMessage_p4 = (gcnew System::Windows::Forms::RichTextBox());
			this->bRetour_p4 = (gcnew System::Windows::Forms::Button());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->tTauxTVA_p4 = (gcnew System::Windows::Forms::TextBox());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->bAjouter_p4 = (gcnew System::Windows::Forms::Button());
			this->bMaj_p4 = (gcnew System::Windows::Forms::Button());
			this->bSupprimer_p4 = (gcnew System::Windows::Forms::Button());
			this->tPrixHT_p4 = (gcnew System::Windows::Forms::TextBox());
			this->tSeuilReap_p4 = (gcnew System::Windows::Forms::TextBox());
			this->tQuantiteStock_p4 = (gcnew System::Windows::Forms::TextBox());
			this->tDesignation_p4 = (gcnew System::Windows::Forms::TextBox());
			this->tReferenceArticle_p4 = (gcnew System::Windows::Forms::TextBox());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->dArticle_p4 = (gcnew System::Windows::Forms::DataGridView());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->panelStatistiques = (gcnew System::Windows::Forms::Panel());
			this->panelMenu->SuspendLayout();
			this->panelCommande->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dDetailPaiement_p3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dCommande))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dDetailCommande_p3))->BeginInit();
			this->panelEmploye->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dEmploye_p1))->BeginInit();
			this->panelClient->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dClient_p2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dAdresse_p2))->BeginInit();
			this->panelStock->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dArticle_p4))->BeginInit();
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
			this->label2->Size = System::Drawing::Size(259, 20);
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
			this->buttonCommande->Click += gcnew System::EventHandler(this, &MyForm::buttonCommande_Click);
			// 
			// buttonStock
			// 
			this->buttonStock->Location = System::Drawing::Point(464, 345);
			this->buttonStock->Name = L"buttonStock";
			this->buttonStock->Size = System::Drawing::Size(109, 25);
			this->buttonStock->TabIndex = 5;
			this->buttonStock->Text = L"Stock";
			this->buttonStock->UseVisualStyleBackColor = true;
			this->buttonStock->Click += gcnew System::EventHandler(this, &MyForm::buttonStock_Click);
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
			this->panelMenu->Location = System::Drawing::Point(3, 0);
			this->panelMenu->Name = L"panelMenu";
			this->panelMenu->Size = System::Drawing::Size(1025, 547);
			this->panelMenu->TabIndex = 8;
			// 
			// panelCommande
			// 
			this->panelCommande->Controls->Add(this->tTypeVoieFacturation_p3);
			this->panelCommande->Controls->Add(this->label64);
			this->panelCommande->Controls->Add(this->tVilleFacturation_p3);
			this->panelCommande->Controls->Add(this->label65);
			this->panelCommande->Controls->Add(this->tCodePostalFacturation_p3);
			this->panelCommande->Controls->Add(this->label66);
			this->panelCommande->Controls->Add(this->label67);
			this->panelCommande->Controls->Add(this->tNomVoieFacturation_p3);
			this->panelCommande->Controls->Add(this->label68);
			this->panelCommande->Controls->Add(this->tComplementFacturation_p3);
			this->panelCommande->Controls->Add(this->tNumVoieFacturation_p3);
			this->panelCommande->Controls->Add(this->label69);
			this->panelCommande->Controls->Add(this->tTypeVoieLivraison_p3);
			this->panelCommande->Controls->Add(this->label63);
			this->panelCommande->Controls->Add(this->label59);
			this->panelCommande->Controls->Add(this->tVilleLivraison_p3);
			this->panelCommande->Controls->Add(this->label56);
			this->panelCommande->Controls->Add(this->tCodePostalLivraison_p3);
			this->panelCommande->Controls->Add(this->label55);
			this->panelCommande->Controls->Add(this->label33);
			this->panelCommande->Controls->Add(this->label51);
			this->panelCommande->Controls->Add(this->tNomVoieLivraison_p3);
			this->panelCommande->Controls->Add(this->tDateLivraison_p3);
			this->panelCommande->Controls->Add(this->label54);
			this->panelCommande->Controls->Add(this->tMoyenPaiement_p3);
			this->panelCommande->Controls->Add(this->tDatePaiement_p3);
			this->panelCommande->Controls->Add(this->label49);
			this->panelCommande->Controls->Add(this->label50);
			this->panelCommande->Controls->Add(this->label48);
			this->panelCommande->Controls->Add(this->label47);
			this->panelCommande->Controls->Add(this->label46);
			this->panelCommande->Controls->Add(this->label45);
			this->panelCommande->Controls->Add(this->label44);
			this->panelCommande->Controls->Add(this->dDetailPaiement_p3);
			this->panelCommande->Controls->Add(this->label30);
			this->panelCommande->Controls->Add(this->tBoxMessage_p3);
			this->panelCommande->Controls->Add(this->bRetour_p3);
			this->panelCommande->Controls->Add(this->bRechercherCommande_p3);
			this->panelCommande->Controls->Add(this->label31);
			this->panelCommande->Controls->Add(this->tRechercheCommande_p3);
			this->panelCommande->Controls->Add(this->tDernierSolde_p3);
			this->panelCommande->Controls->Add(this->label32);
			this->panelCommande->Controls->Add(this->bAjouter_p3);
			this->panelCommande->Controls->Add(this->bMaj_p3);
			this->panelCommande->Controls->Add(this->bSupprimer_p3);
			this->panelCommande->Controls->Add(this->tQuantiteArticle_p3);
			this->panelCommande->Controls->Add(this->tRefArticle_p3);
			this->panelCommande->Controls->Add(this->tComplementLivraison_p3);
			this->panelCommande->Controls->Add(this->tNumVoieLivraison_p3);
			this->panelCommande->Controls->Add(this->tPrenom_p3);
			this->panelCommande->Controls->Add(this->tNom_p3);
			this->panelCommande->Controls->Add(this->label34);
			this->panelCommande->Controls->Add(this->label35);
			this->panelCommande->Controls->Add(this->label37);
			this->panelCommande->Controls->Add(this->label39);
			this->panelCommande->Controls->Add(this->label40);
			this->panelCommande->Controls->Add(this->label41);
			this->panelCommande->Controls->Add(this->label42);
			this->panelCommande->Controls->Add(this->label43);
			this->panelCommande->Controls->Add(this->dCommande);
			this->panelCommande->Controls->Add(this->dDetailCommande_p3);
			this->panelCommande->Location = System::Drawing::Point(1, 0);
			this->panelCommande->Name = L"panelCommande";
			this->panelCommande->Size = System::Drawing::Size(1049, 599);
			this->panelCommande->TabIndex = 11;
			// 
			// tTypeVoieFacturation_p3
			// 
			this->tTypeVoieFacturation_p3->Location = System::Drawing::Point(141, 320);
			this->tTypeVoieFacturation_p3->Name = L"tTypeVoieFacturation_p3";
			this->tTypeVoieFacturation_p3->Size = System::Drawing::Size(62, 20);
			this->tTypeVoieFacturation_p3->TabIndex = 144;
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->Location = System::Drawing::Point(137, 307);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(69, 13);
			this->label64->TabIndex = 143;
			this->label64->Text = L"Type de voie";
			// 
			// tVilleFacturation_p3
			// 
			this->tVilleFacturation_p3->Location = System::Drawing::Point(395, 320);
			this->tVilleFacturation_p3->Name = L"tVilleFacturation_p3";
			this->tVilleFacturation_p3->Size = System::Drawing::Size(62, 20);
			this->tVilleFacturation_p3->TabIndex = 142;
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->Location = System::Drawing::Point(410, 307);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(26, 13);
			this->label65->TabIndex = 141;
			this->label65->Text = L"Ville";
			// 
			// tCodePostalFacturation_p3
			// 
			this->tCodePostalFacturation_p3->Location = System::Drawing::Point(327, 320);
			this->tCodePostalFacturation_p3->Name = L"tCodePostalFacturation_p3";
			this->tCodePostalFacturation_p3->Size = System::Drawing::Size(62, 20);
			this->tCodePostalFacturation_p3->TabIndex = 140;
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->Location = System::Drawing::Point(327, 307);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(63, 13);
			this->label66->TabIndex = 139;
			this->label66->Text = L"Code postal";
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->Location = System::Drawing::Point(26, 307);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(42, 13);
			this->label67->TabIndex = 138;
			this->label67->Text = L"N° voie";
			// 
			// tNomVoieFacturation_p3
			// 
			this->tNomVoieFacturation_p3->Location = System::Drawing::Point(210, 320);
			this->tNomVoieFacturation_p3->Name = L"tNomVoieFacturation_p3";
			this->tNomVoieFacturation_p3->Size = System::Drawing::Size(110, 20);
			this->tNomVoieFacturation_p3->TabIndex = 137;
			// 
			// label68
			// 
			this->label68->AutoSize = true;
			this->label68->Location = System::Drawing::Point(231, 307);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(67, 13);
			this->label68->TabIndex = 136;
			this->label68->Text = L"Nom de voie";
			// 
			// tComplementFacturation_p3
			// 
			this->tComplementFacturation_p3->Location = System::Drawing::Point(73, 320);
			this->tComplementFacturation_p3->Name = L"tComplementFacturation_p3";
			this->tComplementFacturation_p3->Size = System::Drawing::Size(62, 20);
			this->tComplementFacturation_p3->TabIndex = 135;
			// 
			// tNumVoieFacturation_p3
			// 
			this->tNumVoieFacturation_p3->Location = System::Drawing::Point(27, 320);
			this->tNumVoieFacturation_p3->Name = L"tNumVoieFacturation_p3";
			this->tNumVoieFacturation_p3->Size = System::Drawing::Size(39, 20);
			this->tNumVoieFacturation_p3->TabIndex = 134;
			// 
			// label69
			// 
			this->label69->AutoSize = true;
			this->label69->Location = System::Drawing::Point(73, 307);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(65, 13);
			this->label69->TabIndex = 133;
			this->label69->Text = L"Complément";
			// 
			// tTypeVoieLivraison_p3
			// 
			this->tTypeVoieLivraison_p3->Location = System::Drawing::Point(141, 257);
			this->tTypeVoieLivraison_p3->Name = L"tTypeVoieLivraison_p3";
			this->tTypeVoieLivraison_p3->Size = System::Drawing::Size(62, 20);
			this->tTypeVoieLivraison_p3->TabIndex = 132;
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->Location = System::Drawing::Point(137, 244);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(69, 13);
			this->label63->TabIndex = 131;
			this->label63->Text = L"Type de voie";
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->Location = System::Drawing::Point(6, 290);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(157, 13);
			this->label59->TabIndex = 126;
			this->label59->Text = L"Informations adresse facturation";
			// 
			// tVilleLivraison_p3
			// 
			this->tVilleLivraison_p3->Location = System::Drawing::Point(395, 257);
			this->tVilleLivraison_p3->Name = L"tVilleLivraison_p3";
			this->tVilleLivraison_p3->Size = System::Drawing::Size(62, 20);
			this->tVilleLivraison_p3->TabIndex = 119;
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Location = System::Drawing::Point(410, 244);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(26, 13);
			this->label56->TabIndex = 118;
			this->label56->Text = L"Ville";
			// 
			// tCodePostalLivraison_p3
			// 
			this->tCodePostalLivraison_p3->Location = System::Drawing::Point(327, 257);
			this->tCodePostalLivraison_p3->Name = L"tCodePostalLivraison_p3";
			this->tCodePostalLivraison_p3->Size = System::Drawing::Size(62, 20);
			this->tCodePostalLivraison_p3->TabIndex = 117;
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Location = System::Drawing::Point(327, 244);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(63, 13);
			this->label55->TabIndex = 116;
			this->label55->Text = L"Code postal";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(6, 225);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(145, 13);
			this->label33->TabIndex = 115;
			this->label33->Text = L"Informations adresse livraison";
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Location = System::Drawing::Point(26, 244);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(42, 13);
			this->label51->TabIndex = 111;
			this->label51->Text = L"N° voie";
			// 
			// tNomVoieLivraison_p3
			// 
			this->tNomVoieLivraison_p3->Location = System::Drawing::Point(210, 257);
			this->tNomVoieLivraison_p3->Name = L"tNomVoieLivraison_p3";
			this->tNomVoieLivraison_p3->Size = System::Drawing::Size(110, 20);
			this->tNomVoieLivraison_p3->TabIndex = 109;
			// 
			// tDateLivraison_p3
			// 
			this->tDateLivraison_p3->Location = System::Drawing::Point(254, 185);
			this->tDateLivraison_p3->Name = L"tDateLivraison_p3";
			this->tDateLivraison_p3->Size = System::Drawing::Size(110, 20);
			this->tDateLivraison_p3->TabIndex = 108;
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Location = System::Drawing::Point(231, 244);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(67, 13);
			this->label54->TabIndex = 105;
			this->label54->Text = L"Nom de voie";
			// 
			// tMoyenPaiement_p3
			// 
			this->tMoyenPaiement_p3->Location = System::Drawing::Point(254, 454);
			this->tMoyenPaiement_p3->Name = L"tMoyenPaiement_p3";
			this->tMoyenPaiement_p3->Size = System::Drawing::Size(110, 20);
			this->tMoyenPaiement_p3->TabIndex = 102;
			// 
			// tDatePaiement_p3
			// 
			this->tDatePaiement_p3->Location = System::Drawing::Point(119, 454);
			this->tDatePaiement_p3->Name = L"tDatePaiement_p3";
			this->tDatePaiement_p3->Size = System::Drawing::Size(110, 20);
			this->tDatePaiement_p3->TabIndex = 101;
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Location = System::Drawing::Point(254, 438);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(100, 13);
			this->label49->TabIndex = 100;
			this->label49->Text = L"Moyen de paiement";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Location = System::Drawing::Point(117, 440);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(91, 13);
			this->label50->TabIndex = 99;
			this->label50->Text = L"Date de paiement";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Location = System::Drawing::Point(68, 355);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(95, 13);
			this->label48->TabIndex = 98;
			this->label48->Text = L"Informations article";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Location = System::Drawing::Point(67, 420);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(110, 13);
			this->label47->TabIndex = 97;
			this->label47->Text = L"Informations paiement";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Location = System::Drawing::Point(70, 115);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(119, 13);
			this->label46->TabIndex = 96;
			this->label46->Text = L"Informations commande";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(120, 171);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(93, 13);
			this->label45->TabIndex = 94;
			this->label45->Text = L"Date dernier solde";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(471, 348);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(86, 13);
			this->label44->TabIndex = 93;
			this->label44->Text = L"Détails Paiement";
			// 
			// dDetailPaiement_p3
			// 
			this->dDetailPaiement_p3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dDetailPaiement_p3->Location = System::Drawing::Point(474, 364);
			this->dDetailPaiement_p3->Name = L"dDetailPaiement_p3";
			this->dDetailPaiement_p3->Size = System::Drawing::Size(560, 124);
			this->dDetailPaiement_p3->TabIndex = 92;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(473, 500);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(50, 13);
			this->label30->TabIndex = 91;
			this->label30->Text = L"Message";
			// 
			// tBoxMessage_p3
			// 
			this->tBoxMessage_p3->Location = System::Drawing::Point(474, 506);
			this->tBoxMessage_p3->Name = L"tBoxMessage_p3";
			this->tBoxMessage_p3->Size = System::Drawing::Size(560, 53);
			this->tBoxMessage_p3->TabIndex = 90;
			this->tBoxMessage_p3->Text = L"";
			// 
			// bRetour_p3
			// 
			this->bRetour_p3->Location = System::Drawing::Point(4, 3);
			this->bRetour_p3->Name = L"bRetour_p3";
			this->bRetour_p3->Size = System::Drawing::Size(37, 23);
			this->bRetour_p3->TabIndex = 89;
			this->bRetour_p3->Text = L"<<";
			this->bRetour_p3->UseVisualStyleBackColor = true;
			this->bRetour_p3->Click += gcnew System::EventHandler(this, &MyForm::bRetour_p3_Click);
			// 
			// bRechercherCommande_p3
			// 
			this->bRechercherCommande_p3->Location = System::Drawing::Point(204, 92);
			this->bRechercherCommande_p3->Name = L"bRechercherCommande_p3";
			this->bRechercherCommande_p3->Size = System::Drawing::Size(76, 20);
			this->bRechercherCommande_p3->TabIndex = 88;
			this->bRechercherCommande_p3->Text = L"Rechercher";
			this->bRechercherCommande_p3->UseVisualStyleBackColor = true;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(187, 50);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(112, 13);
			this->label31->TabIndex = 87;
			this->label31->Text = L"Référence commande";
			// 
			// tRechercheCommande_p3
			// 
			this->tRechercheCommande_p3->Location = System::Drawing::Point(188, 66);
			this->tRechercheCommande_p3->Name = L"tRechercheCommande_p3";
			this->tRechercheCommande_p3->Size = System::Drawing::Size(110, 20);
			this->tRechercheCommande_p3->TabIndex = 86;
			// 
			// tDernierSolde_p3
			// 
			this->tDernierSolde_p3->Location = System::Drawing::Point(121, 185);
			this->tDernierSolde_p3->Name = L"tDernierSolde_p3";
			this->tDernierSolde_p3->Size = System::Drawing::Size(111, 20);
			this->tDernierSolde_p3->TabIndex = 85;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(252, 171);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(86, 13);
			this->label32->TabIndex = 84;
			this->label32->Text = L"Date de livraison";
			// 
			// bAjouter_p3
			// 
			this->bAjouter_p3->Location = System::Drawing::Point(250, 486);
			this->bAjouter_p3->Name = L"bAjouter_p3";
			this->bAjouter_p3->Size = System::Drawing::Size(66, 68);
			this->bAjouter_p3->TabIndex = 81;
			this->bAjouter_p3->Text = L"Ajouter";
			this->bAjouter_p3->UseVisualStyleBackColor = true;
			// 
			// bMaj_p3
			// 
			this->bMaj_p3->Location = System::Drawing::Point(170, 486);
			this->bMaj_p3->Name = L"bMaj_p3";
			this->bMaj_p3->Size = System::Drawing::Size(75, 32);
			this->bMaj_p3->TabIndex = 80;
			this->bMaj_p3->Text = L"Mise à jour";
			this->bMaj_p3->UseVisualStyleBackColor = true;
			// 
			// bSupprimer_p3
			// 
			this->bSupprimer_p3->Location = System::Drawing::Point(170, 522);
			this->bSupprimer_p3->Name = L"bSupprimer_p3";
			this->bSupprimer_p3->Size = System::Drawing::Size(75, 32);
			this->bSupprimer_p3->TabIndex = 79;
			this->bSupprimer_p3->Text = L"Supprimer";
			this->bSupprimer_p3->UseVisualStyleBackColor = true;
			// 
			// tQuantiteArticle_p3
			// 
			this->tQuantiteArticle_p3->Location = System::Drawing::Point(255, 388);
			this->tQuantiteArticle_p3->Name = L"tQuantiteArticle_p3";
			this->tQuantiteArticle_p3->Size = System::Drawing::Size(110, 20);
			this->tQuantiteArticle_p3->TabIndex = 78;
			// 
			// tRefArticle_p3
			// 
			this->tRefArticle_p3->Location = System::Drawing::Point(121, 388);
			this->tRefArticle_p3->Name = L"tRefArticle_p3";
			this->tRefArticle_p3->Size = System::Drawing::Size(110, 20);
			this->tRefArticle_p3->TabIndex = 77;
			// 
			// tComplementLivraison_p3
			// 
			this->tComplementLivraison_p3->Location = System::Drawing::Point(73, 257);
			this->tComplementLivraison_p3->Name = L"tComplementLivraison_p3";
			this->tComplementLivraison_p3->Size = System::Drawing::Size(62, 20);
			this->tComplementLivraison_p3->TabIndex = 75;
			// 
			// tNumVoieLivraison_p3
			// 
			this->tNumVoieLivraison_p3->Location = System::Drawing::Point(27, 257);
			this->tNumVoieLivraison_p3->Name = L"tNumVoieLivraison_p3";
			this->tNumVoieLivraison_p3->Size = System::Drawing::Size(39, 20);
			this->tNumVoieLivraison_p3->TabIndex = 74;
			// 
			// tPrenom_p3
			// 
			this->tPrenom_p3->Location = System::Drawing::Point(254, 145);
			this->tPrenom_p3->Name = L"tPrenom_p3";
			this->tPrenom_p3->Size = System::Drawing::Size(110, 20);
			this->tPrenom_p3->TabIndex = 73;
			// 
			// tNom_p3
			// 
			this->tNom_p3->Location = System::Drawing::Point(123, 145);
			this->tNom_p3->Name = L"tNom_p3";
			this->tNom_p3->Size = System::Drawing::Size(110, 20);
			this->tNom_p3->TabIndex = 72;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(255, 375);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(47, 13);
			this->label34->TabIndex = 71;
			this->label34->Text = L"Quantité";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(118, 375);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(57, 13);
			this->label35->TabIndex = 70;
			this->label35->Text = L"Référence";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(73, 244);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(65, 13);
			this->label37->TabIndex = 68;
			this->label37->Text = L"Complément";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(252, 132);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(43, 13);
			this->label39->TabIndex = 66;
			this->label39->Text = L"Prenom";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(122, 132);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(29, 13);
			this->label40->TabIndex = 65;
			this->label40->Text = L"Nom";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label41->Location = System::Drawing::Point(177, 22);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(135, 20);
			this->label41->TabIndex = 64;
			this->label41->Text = L"Menu Commande";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(471, 197);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(95, 13);
			this->label42->TabIndex = 63;
			this->label42->Text = L"Détails Commande";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(471, 32);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(60, 13);
			this->label43->TabIndex = 62;
			this->label43->Text = L"Commande";
			// 
			// dCommande
			// 
			this->dCommande->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dCommande->Location = System::Drawing::Point(474, 46);
			this->dCommande->Name = L"dCommande";
			this->dCommande->Size = System::Drawing::Size(561, 134);
			this->dCommande->TabIndex = 61;
			// 
			// dDetailCommande_p3
			// 
			this->dDetailCommande_p3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dDetailCommande_p3->Location = System::Drawing::Point(474, 210);
			this->dDetailCommande_p3->Name = L"dDetailCommande_p3";
			this->dDetailCommande_p3->Size = System::Drawing::Size(561, 123);
			this->dDetailCommande_p3->TabIndex = 60;
			// 
			// panelEmploye
			// 
			this->panelEmploye->Controls->Add(this->label28);
			this->panelEmploye->Controls->Add(this->tBoxReponse_p1);
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
			this->panelEmploye->Location = System::Drawing::Point(2, 2);
			this->panelEmploye->Name = L"panelEmploye";
			this->panelEmploye->Size = System::Drawing::Size(1037, 541);
			this->panelEmploye->TabIndex = 9;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(333, 453);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(50, 13);
			this->label28->TabIndex = 60;
			this->label28->Text = L"Message";
			// 
			// tBoxReponse_p1
			// 
			this->tBoxReponse_p1->Location = System::Drawing::Point(336, 469);
			this->tBoxReponse_p1->Name = L"tBoxReponse_p1";
			this->tBoxReponse_p1->Size = System::Drawing::Size(685, 40);
			this->tBoxReponse_p1->TabIndex = 59;
			this->tBoxReponse_p1->Text = L"";
			// 
			// bRetour_p1
			// 
			this->bRetour_p1->Location = System::Drawing::Point(1, 1);
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
			this->dEmploye_p1->Size = System::Drawing::Size(686, 394);
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
			this->panelClient->Controls->Add(this->label29);
			this->panelClient->Controls->Add(this->tBoxMessage_p2);
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
			this->panelClient->Location = System::Drawing::Point(1, 0);
			this->panelClient->Name = L"panelClient";
			this->panelClient->Size = System::Drawing::Size(1037, 553);
			this->panelClient->TabIndex = 10;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(359, 473);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(50, 13);
			this->label29->TabIndex = 59;
			this->label29->Text = L"Message";
			// 
			// tBoxMessage_p2
			// 
			this->tBoxMessage_p2->Location = System::Drawing::Point(362, 488);
			this->tBoxMessage_p2->Name = L"tBoxMessage_p2";
			this->tBoxMessage_p2->Size = System::Drawing::Size(666, 55);
			this->tBoxMessage_p2->TabIndex = 58;
			this->tBoxMessage_p2->Text = L"";
			// 
			// bRetour_p2
			// 
			this->bRetour_p2->Location = System::Drawing::Point(4, 5);
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
			this->label16->Location = System::Drawing::Point(359, 208);
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
			this->dClient_p2->Size = System::Drawing::Size(667, 167);
			this->dClient_p2->TabIndex = 2;
			// 
			// dAdresse_p2
			// 
			this->dAdresse_p2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dAdresse_p2->Location = System::Drawing::Point(362, 224);
			this->dAdresse_p2->Name = L"dAdresse_p2";
			this->dAdresse_p2->Size = System::Drawing::Size(667, 234);
			this->dAdresse_p2->TabIndex = 1;
			// 
			// panelStock
			// 
			this->panelStock->Controls->Add(this->bRechercheArticle_p4);
			this->panelStock->Controls->Add(this->label36);
			this->panelStock->Controls->Add(this->tBoxMessage_p4);
			this->panelStock->Controls->Add(this->bRetour_p4);
			this->panelStock->Controls->Add(this->label38);
			this->panelStock->Controls->Add(this->tTauxTVA_p4);
			this->panelStock->Controls->Add(this->label52);
			this->panelStock->Controls->Add(this->bAjouter_p4);
			this->panelStock->Controls->Add(this->bMaj_p4);
			this->panelStock->Controls->Add(this->bSupprimer_p4);
			this->panelStock->Controls->Add(this->tPrixHT_p4);
			this->panelStock->Controls->Add(this->tSeuilReap_p4);
			this->panelStock->Controls->Add(this->tQuantiteStock_p4);
			this->panelStock->Controls->Add(this->tDesignation_p4);
			this->panelStock->Controls->Add(this->tReferenceArticle_p4);
			this->panelStock->Controls->Add(this->label58);
			this->panelStock->Controls->Add(this->label60);
			this->panelStock->Controls->Add(this->label62);
			this->panelStock->Controls->Add(this->label71);
			this->panelStock->Controls->Add(this->label72);
			this->panelStock->Controls->Add(this->dArticle_p4);
			this->panelStock->Controls->Add(this->label73);
			this->panelStock->Location = System::Drawing::Point(2, 0);
			this->panelStock->Name = L"panelStock";
			this->panelStock->Size = System::Drawing::Size(1048, 559);
			this->panelStock->TabIndex = 12;
			// 
			// bRechercheArticle_p4
			// 
			this->bRechercheArticle_p4->Location = System::Drawing::Point(113, 110);
			this->bRechercheArticle_p4->Name = L"bRechercheArticle_p4";
			this->bRechercheArticle_p4->Size = System::Drawing::Size(74, 21);
			this->bRechercheArticle_p4->TabIndex = 90;
			this->bRechercheArticle_p4->Text = L"Rechercher";
			this->bRechercheArticle_p4->UseVisualStyleBackColor = true;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(327, 487);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(50, 13);
			this->label36->TabIndex = 89;
			this->label36->Text = L"Message";
			// 
			// tBoxMessage_p4
			// 
			this->tBoxMessage_p4->Location = System::Drawing::Point(322, 493);
			this->tBoxMessage_p4->Name = L"tBoxMessage_p4";
			this->tBoxMessage_p4->Size = System::Drawing::Size(712, 40);
			this->tBoxMessage_p4->TabIndex = 88;
			this->tBoxMessage_p4->Text = L"";
			// 
			// bRetour_p4
			// 
			this->bRetour_p4->Location = System::Drawing::Point(1, 1);
			this->bRetour_p4->Name = L"bRetour_p4";
			this->bRetour_p4->Size = System::Drawing::Size(37, 23);
			this->bRetour_p4->TabIndex = 87;
			this->bRetour_p4->Text = L"<<";
			this->bRetour_p4->UseVisualStyleBackColor = true;
			this->bRetour_p4->Click += gcnew System::EventHandler(this, &MyForm::bRetour_p4_Click);
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(324, 35);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(36, 13);
			this->label38->TabIndex = 86;
			this->label38->Text = L"Article";
			// 
			// tTauxTVA_p4
			// 
			this->tTauxTVA_p4->Location = System::Drawing::Point(27, 320);
			this->tTauxTVA_p4->Name = L"tTauxTVA_p4";
			this->tTauxTVA_p4->Size = System::Drawing::Size(110, 20);
			this->tTauxTVA_p4->TabIndex = 85;
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Location = System::Drawing::Point(24, 306);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(72, 13);
			this->label52->TabIndex = 84;
			this->label52->Text = L"Taux TVA (%)";
			// 
			// bAjouter_p4
			// 
			this->bAjouter_p4->Location = System::Drawing::Point(168, 394);
			this->bAjouter_p4->Name = L"bAjouter_p4";
			this->bAjouter_p4->Size = System::Drawing::Size(66, 110);
			this->bAjouter_p4->TabIndex = 83;
			this->bAjouter_p4->Text = L"Ajouter";
			this->bAjouter_p4->UseVisualStyleBackColor = true;
			// 
			// bMaj_p4
			// 
			this->bMaj_p4->Location = System::Drawing::Point(83, 394);
			this->bMaj_p4->Name = L"bMaj_p4";
			this->bMaj_p4->Size = System::Drawing::Size(75, 51);
			this->bMaj_p4->TabIndex = 82;
			this->bMaj_p4->Text = L"Mise à jour";
			this->bMaj_p4->UseVisualStyleBackColor = true;
			// 
			// bSupprimer_p4
			// 
			this->bSupprimer_p4->Location = System::Drawing::Point(83, 451);
			this->bSupprimer_p4->Name = L"bSupprimer_p4";
			this->bSupprimer_p4->Size = System::Drawing::Size(75, 53);
			this->bSupprimer_p4->TabIndex = 81;
			this->bSupprimer_p4->Text = L"Supprimer";
			this->bSupprimer_p4->UseVisualStyleBackColor = true;
			// 
			// tPrixHT_p4
			// 
			this->tPrixHT_p4->Location = System::Drawing::Point(162, 320);
			this->tPrixHT_p4->Name = L"tPrixHT_p4";
			this->tPrixHT_p4->Size = System::Drawing::Size(110, 20);
			this->tPrixHT_p4->TabIndex = 77;
			// 
			// tSeuilReap_p4
			// 
			this->tSeuilReap_p4->Location = System::Drawing::Point(26, 264);
			this->tSeuilReap_p4->Name = L"tSeuilReap_p4";
			this->tSeuilReap_p4->Size = System::Drawing::Size(110, 20);
			this->tSeuilReap_p4->TabIndex = 76;
			// 
			// tQuantiteStock_p4
			// 
			this->tQuantiteStock_p4->Location = System::Drawing::Point(161, 264);
			this->tQuantiteStock_p4->Name = L"tQuantiteStock_p4";
			this->tQuantiteStock_p4->Size = System::Drawing::Size(111, 20);
			this->tQuantiteStock_p4->TabIndex = 75;
			// 
			// tDesignation_p4
			// 
			this->tDesignation_p4->Location = System::Drawing::Point(66, 192);
			this->tDesignation_p4->Name = L"tDesignation_p4";
			this->tDesignation_p4->Size = System::Drawing::Size(167, 20);
			this->tDesignation_p4->TabIndex = 73;
			// 
			// tReferenceArticle_p4
			// 
			this->tReferenceArticle_p4->Location = System::Drawing::Point(93, 84);
			this->tReferenceArticle_p4->Name = L"tReferenceArticle_p4";
			this->tReferenceArticle_p4->Size = System::Drawing::Size(110, 20);
			this->tReferenceArticle_p4->TabIndex = 72;
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->Location = System::Drawing::Point(159, 306);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(57, 13);
			this->label58->TabIndex = 69;
			this->label58->Text = L"Prix HT (€)";
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->Location = System::Drawing::Point(16, 251);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(131, 13);
			this->label60->TabIndex = 68;
			this->label60->Text = L"Seuil réapprovisionnement";
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->Location = System::Drawing::Point(159, 251);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(76, 13);
			this->label62->TabIndex = 66;
			this->label62->Text = L"Quantité stock";
			// 
			// label71
			// 
			this->label71->AutoSize = true;
			this->label71->Location = System::Drawing::Point(119, 176);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(63, 13);
			this->label71->TabIndex = 64;
			this->label71->Text = L"Désignation";
			// 
			// label72
			// 
			this->label72->AutoSize = true;
			this->label72->Location = System::Drawing::Point(104, 68);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(88, 13);
			this->label72->TabIndex = 63;
			this->label72->Text = L"Référence article";
			// 
			// dArticle_p4
			// 
			this->dArticle_p4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dArticle_p4->Location = System::Drawing::Point(322, 51);
			this->dArticle_p4->Name = L"dArticle_p4";
			this->dArticle_p4->Size = System::Drawing::Size(713, 394);
			this->dArticle_p4->TabIndex = 62;
			// 
			// label73
			// 
			this->label73->AutoSize = true;
			this->label73->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label73->Location = System::Drawing::Point(103, 30);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(94, 20);
			this->label73->TabIndex = 61;
			this->label73->Text = L"Menu Stock";
			// 
			// panelStatistiques
			// 
			this->panelStatistiques->Location = System::Drawing::Point(0, 0);
			this->panelStatistiques->Name = L"panelStatistiques";
			this->panelStatistiques->Size = System::Drawing::Size(1047, 564);
			this->panelStatistiques->TabIndex = 13;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1044, 562);
			this->Controls->Add(this->panelStatistiques);
			this->Controls->Add(this->panelClient);
			this->Controls->Add(this->panelCommande);
			this->Controls->Add(this->panelMenu);
			this->Controls->Add(this->panelStock);
			this->Controls->Add(this->panelEmploye);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panelMenu->ResumeLayout(false);
			this->panelMenu->PerformLayout();
			this->panelCommande->ResumeLayout(false);
			this->panelCommande->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dDetailPaiement_p3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dCommande))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dDetailCommande_p3))->EndInit();
			this->panelEmploye->ResumeLayout(false);
			this->panelEmploye->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dEmploye_p1))->EndInit();
			this->panelClient->ResumeLayout(false);
			this->panelClient->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dClient_p2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dAdresse_p2))->EndInit();
			this->panelStock->ResumeLayout(false);
			this->panelStock->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dArticle_p4))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->panelEmploye->Hide();
		this->panelClient->Hide();
		this->panelCommande->Hide();
		this->panelStatistiques->Hide();
	}



private: System::Void buttonEmploye_Click(System::Object^ sender, System::EventArgs^ e) {
	this->panelMenu->Hide();
	this->panelEmploye->Show();

}

private: System::Void buttonClient_Click(System::Object^ sender, System::EventArgs^ e) {
   this->panelMenu->Hide();
   this->panelClient->Show();
}

private: System::Void buttonCommande_Click(System::Object^ sender, System::EventArgs^ e) {
	this->panelMenu->Hide();
	this->panelCommande->Show();
}

private: System::Void buttonStock_Click(System::Object^ sender, System::EventArgs^ e) {
	this->panelMenu->Hide();
	this->panelStock->Show();
}
private: System::Void bRetour_p1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->panelEmploye->Hide();
	this->panelMenu->Show();

}

private: System::Void bRetour_p2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->panelClient->Hide();
	this->panelMenu->Show();
}

private: System::Void bRetour_p3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->panelCommande->Hide();
	this->panelMenu->Show();
}

private: System::Void bRetour_p4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->panelStock->Hide();
	this->panelMenu->Show();
}

};
}


/*
			this->panelEmploye->Hide(); 
			this->panelMenu->Hide();
			this->panelCommande->Hide();
			this->panelClient->Hide();
			this->panelStock->Show();
			this->panelStatistiques->Hide();


			this->panelEmploye->Hide();
			this->panelMenu->Hide();
			this->panelCommande->Hide();
			this->panelClient->Show();

			this->panelEmploye->Show();
			this->panelMenu->Show();
			this->panelCommande->Show();
			this->panelClient->Show();
		


*/