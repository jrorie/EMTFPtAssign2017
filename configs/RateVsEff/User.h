
// *** Default user settings *** //
TString IN_DIR_NAME   = ".";          // Directory for input ROOT files
TString OUT_DIR_NAME  = "plots";      // Directory for output ROOT file
TString OUT_FILE_NAME = "RateVsEff";  // Name base for output ROOT file
std::vector<PtAlgo> ALGOS    = {};    // Vector of factory-MVA-mode sets for evaluation
std::vector<int>    EFF_CUTS = {};    // Vector of efficiency thresholds (%)
std::vector<int>    TURN_ONS = {};    // Vector of pT cuts for turn-on curves

namespace RateVsEff_cfg {

  inline void ConfigureUser( const TString USER ) {
    
    std::cout << "\nConfiguring RateVsEff code for user " << USER << std::endl;
    
    if (USER == "AWB") {

<<<<<<< HEAD
      IN_DIR_NAME = "/afs/cern.ch/work/a/abrinke1/public/EMTF/PtAssign2017";
=======
      const int MODE = 14;  // Specify one mode in particular to look at

      IN_DIR_NAME   = "/afs/cern.ch/work/a/abrinke1/public/EMTF/PtAssign2017/files";
      TString out_str;
      out_str.Form("RateVsEff_mode_%d_eta_1p2_2p5", MODE);
      OUT_FILE_NAME = out_str;

>>>>>>> upstream/master
      EFF_CUTS    = {90};
      TURN_ONS    = {8, 16, 24};

      TString in_str;
      TString fact_str;      
      TString ID_str;
      TString alias_str;

      PtAlgo EMTF15;  // 2016 EMTF pT algorithm, mode 15
      EMTF15.in_file_name = "PtRegression_Apr_2017_05_06_MODE_0_noBitCompr_noRPC.root";
      EMTF15.fact_name    = "f_MODE_0_logPtTarg_noWgt_noBitCompr_noRPC";
      EMTF15.MVA_name     = "EMTF_pt";
      EMTF15.unique_ID    = "EMTF15";
      EMTF15.alias        = "EMTF mode 15";
      EMTF15.modes        = {15};
      EMTF15.modes_CSC    = {15};
      EMTF15.modes_RPC    = {0};  // No RPC hits allowed
      EMTF15.trg_pt_scale = 1./1.4;  // Had been scaled up by 1.4 from original regression 
      EMTF15.color        = 1;  // kBlack 

<<<<<<< HEAD
      PtAlgo MVA1;
      MVA1.in_file_name = "PtRegression_Apr_2017_04_20_MODE_15_noBitCompr.root";
      MVA1.fact_name    = "f_MODE_15_logPtTarg_invPtWgt_noBitCompr";
      MVA1.MVA_name     = "BDTG_AWB";
      MVA1.unique_ID    = "BDT_CSC_only_uncompr_mode_15_15_0";
      MVA1.alias        = "Mode 15 (15/0) CSC-only BDT, uncompressed";
      MVA1.modes        = {15};
      MVA1.modes_CSC    = {15};
      MVA1.modes_RPC    = {0};  // No RPC hits allowed
      MVA1.color        = 4;  // kBlue 

      PtAlgo MVA2;
      MVA2.in_file_name = "PtRegression_Apr_2017_04_20_MODE_15_bitCompr.root";
      MVA2.fact_name    = "f_MODE_15_logPtTarg_invPtWgt_bitCompr";
      MVA2.MVA_name     = "BDTG_AWB";
      MVA2.unique_ID    = "BDT_CSC_only_compr_mode_15_15_0";
      MVA2.alias        = "Mode 15 (15/0) CSC-only BDT, compressed";
      MVA2.modes        = {15};
      MVA2.modes_CSC    = {15};
      MVA2.modes_RPC    = {0};  // No RPC hits allowed
      MVA2.color        = 3;  // kGreen 

      PtAlgo MVA3;
      MVA3.in_file_name = "PtRegression_Apr_2017_04_20_MODE_15_bitCompr_RPC.root";
      MVA3.fact_name    = "f_MODE_15_logPtTarg_invPtWgt_bitCompr_RPC";
      MVA3.MVA_name     = "BDTG_AWB";
      MVA3.unique_ID    = "BDT_CSC_RPC_compr_mode_15_15_0";
      MVA3.alias        = "Mode 15 (15/0) CSC+RPC BDT, compressed";
      MVA3.modes        = {15};
      MVA3.modes_CSC    = {15};
      MVA3.modes_RPC    = {0};  // No RPC hits allowed
      MVA3.color        = 2;  // kRed 

      PtAlgo MVA4;
      MVA4.in_file_name = "PtRegression_Apr_2017_04_20_MODE_15_bitCompr_RPC.root";
      MVA4.fact_name    = "f_MODE_15_logPtTarg_invPtWgt_bitCompr_RPC";
      MVA4.MVA_name     = "BDTG_AWB";
      MVA4.unique_ID    = "BDT_CSC_RPC_compr_mode_15_14_1";
      MVA4.alias        = "Mode 15 (14/1) CSC+RPC BDT, compressed";
      MVA4.modes        = {15};
      MVA4.modes_CSC    = {14};
      MVA4.modes_RPC    = {1};
      MVA4.color        = 2;  // kRed 

      PtAlgo MVA5;
      MVA5.in_file_name = "PtRegression_Apr_2017_04_20_MODE_15_bitCompr_RPC.root";
      MVA5.fact_name    = "f_MODE_15_logPtTarg_invPtWgt_bitCompr_RPC";
      MVA5.MVA_name     = "BDTG_AWB";
      MVA5.unique_ID    = "BDT_CSC_RPC_compr_mode_15_13_2";
      MVA5.alias        = "Mode 15 (13/2) CSC+RPC BDT, compressed";
      MVA5.modes        = {15};
      MVA5.modes_CSC    = {13};
      MVA5.modes_RPC    = {2};
      MVA5.color        = 2;  // kRed 

      PtAlgo MVA6;
      MVA6.in_file_name = "PtRegression_Apr_2017_04_20_MODE_15_bitCompr_RPC.root";
      MVA6.fact_name    = "f_MODE_15_logPtTarg_invPtWgt_bitCompr_RPC";
      MVA6.MVA_name     = "BDTG_AWB";
      MVA6.unique_ID    = "BDT_CSC_RPC_compr_mode_15_11_4";
      MVA6.alias        = "Mode 15 (11/4) CSC+RPC BDT, compressed";
      MVA6.modes        = {15};
      MVA6.modes_CSC    = {11};
      MVA6.modes_RPC    = {4};
      MVA6.color        = 2;  // kRed 

      PtAlgo MVA7;
      MVA7.in_file_name = "PtRegression_Apr_2017_04_20_MODE_15_bitCompr_RPC.root";
      MVA7.fact_name    = "f_MODE_15_logPtTarg_invPtWgt_bitCompr_RPC";
      MVA7.MVA_name     = "BDTG_AWB";
      MVA7.unique_ID    = "BDT_CSC_RPC_compr_mode_15_7_8";
      MVA7.alias        = "Mode 15 (7/8) CSC+RPC BDT, compressed";
      MVA7.modes        = {15};
      MVA7.modes_CSC    = {7};
      MVA7.modes_RPC    = {8};
      MVA7.color        = 2;  // kRed 

      ALGOS.push_back(EMTF15);  // First algo is always the standard comparison algo
      ALGOS.push_back(MVA1);
      ALGOS.push_back(MVA2);
      ALGOS.push_back(MVA3);
      /* ALGOS.push_back(MVA4); */
      /* ALGOS.push_back(MVA5); */
      /* ALGOS.push_back(MVA6); */
      /* ALGOS.push_back(MVA7); */
=======
      PtAlgo EMTF = EMTF15;
      ID_str.Form("EMTF%d", MODE);
      alias_str.Form("EMTF mode %d", MODE);
      EMTF.unique_ID    = ID_str;
      EMTF.alias        = alias_str;
      EMTF.modes        = {MODE};
      EMTF.modes_CSC    = {MODE};
      EMTF.color        = 880;  // kViolet



      // Mode 15, invPt pT target, invPt weight
      PtAlgo BDT15_invPt_invPt_Sq;
      BDT15_invPt_invPt_Sq.in_file_name = "PtRegression_Apr_2017_05_09_invPtTarg_invPtWgt_MODE_15_bitCompr_noRPC.root";
      BDT15_invPt_invPt_Sq.fact_name    = "f_MODE_15_invPtTarg_invPtWgt_bitCompr_noRPC";
      BDT15_invPt_invPt_Sq.MVA_name     = "BDTG_AWB";
      BDT15_invPt_invPt_Sq.unique_ID    = "BDT_15_invPt_Sq";
      BDT15_invPt_invPt_Sq.alias        = "invPt target, LeastSq loss";
      BDT15_invPt_invPt_Sq.modes        = {15};
      BDT15_invPt_invPt_Sq.modes_CSC    = {15};
      BDT15_invPt_invPt_Sq.modes_RPC    = {0};
      BDT15_invPt_invPt_Sq.color        = 840;  // kTeal


      // logPt target, invPt weight
      PtAlgo BDT_logPt_Abs;
      in_str.Form("PtRegression_Apr_2017_05_06_MODE_%d_bitCompr_RPC.root", MODE);
      fact_str.Form("f_MODE_%d_logPtTarg_invPtWgt_bitCompr_RPC", MODE);
      /* in_str.Form("PtRegression_Apr_2017_05_06_MODE_%d_bitCompr_noRPC.root", MODE); */
      /* fact_str.Form("f_MODE_%d_logPtTarg_invPtWgt_bitCompr_noRPC", MODE); */
      ID_str.Form("BDT%d_logPt_Abs", MODE);

      BDT_logPt_Abs.in_file_name = in_str;
      BDT_logPt_Abs.fact_name    = fact_str;
      BDT_logPt_Abs.MVA_name     = "BDTG_AWB";
      BDT_logPt_Abs.unique_ID    = ID_str;
      BDT_logPt_Abs.alias        = "logPt target, AbsDev loss";
      BDT_logPt_Abs.modes        = {MODE};
      BDT_logPt_Abs.modes_CSC    = {MODE};
      BDT_logPt_Abs.modes_RPC    = {0};
      BDT_logPt_Abs.color        = 4;  // kBlue


      // invPt target, invPt weight
      PtAlgo BDT_invPt_Abs;
      in_str.Form("PtRegression_Apr_2017_05_10_invPtTarg_invPtWgt_MODE_%d_bitCompr_RPC.root", MODE);
      fact_str.Form("f_MODE_%d_invPtTarg_invPtWgt_bitCompr_RPC", MODE);
      ID_str.Form("BDT%d_invPt_Abs", MODE);

      BDT_invPt_Abs.in_file_name = in_str;
      BDT_invPt_Abs.fact_name    = fact_str;
      BDT_invPt_Abs.MVA_name     = "BDTG_AWB";
      BDT_invPt_Abs.unique_ID    = ID_str;
      BDT_invPt_Abs.alias        = "invPt target, AbsDev loss";
      BDT_invPt_Abs.modes        = {MODE};
      BDT_invPt_Abs.modes_CSC    = {MODE};
      BDT_invPt_Abs.modes_RPC    = {0};
      BDT_invPt_Abs.color        = 2;  // kRed

      PtAlgo BDT_invPt_Hub = BDT_invPt_Abs;
      BDT_invPt_Hub.MVA_name     = "BDTG_AWB_Hub";
      BDT_invPt_Hub.unique_ID    = ID_str.ReplaceAll("_Abs", "_Hub");
      BDT_invPt_Hub.alias        = "invPt target, Huber loss";
      BDT_invPt_Hub.color        = 3;  // kGreen

      PtAlgo BDT_invPt_Sq = BDT_invPt_Abs;
      BDT_invPt_Sq.MVA_name     = "BDTG_AWB_Sq";
      BDT_invPt_Sq.unique_ID    = ID_str.ReplaceAll("_Hub", "_Sq");
      BDT_invPt_Sq.alias        = "invPt target, LeastSq loss, CSC-only";
      BDT_invPt_Sq.color        = 4;  // kBlue

      PtAlgo BDT_invPt_Sq_match = BDT_invPt_Sq;
      BDT_invPt_Sq_match.unique_ID  = ID_str.ReplaceAll("_Sq", "_Sq_match");
      BDT_invPt_Sq_match.alias      = "invPt target, LeastSq loss, CSC-only, matching same-mode EMTF track";
      BDT_invPt_Sq_match.color      = 2;  // kRed
      BDT_invPt_Sq_match.match_EMTF = 1;  // Require EMTF track in same event with same mode / CSC mode

      PtAlgo BDT_invPt_Sq_RPC = BDT_invPt_Sq;
      BDT_invPt_Sq_RPC.unique_ID    = ID_str.ReplaceAll("_Sq", "_Sq_RPC");
      BDT_invPt_Sq_RPC.alias        = "invPt target, LeastSq loss, CSC + 1 RPC";
      BDT_invPt_Sq_RPC.modes_CSC    = {MODE-1, MODE-2, MODE-4, MODE-8};
      BDT_invPt_Sq_RPC.modes_RPC    = {1, 2, 4, 8};
      BDT_invPt_Sq_RPC.color        = 2;  // kRed


      ALGOS.push_back(EMTF15);  // First algo is always the standard comparison algo
      ALGOS.push_back(EMTF);

      ALGOS.push_back(BDT15_invPt_invPt_Sq);

      ALGOS.push_back(BDT_logPt_Abs);
      ALGOS.push_back(BDT_invPt_Abs);
      ALGOS.push_back(BDT_invPt_Hub);
      ALGOS.push_back(BDT_invPt_Sq);
      ALGOS.push_back(BDT_invPt_Sq_match);
      ALGOS.push_back(BDT_invPt_Sq_RPC);
>>>>>>> upstream/master

    } // End conditional: if (USER == "AWB")

    if (USER == "JTR_lxplus") {
    
      IN_DIR_NAME = "/afs/cern.ch/work/j/jrorie/public/EMTF_pT_Training";
      EFF_CUTS    = {90};
      TURN_ONS    = {8, 16, 24};

      PtAlgo EMTF15;  // 2016 EMTF pT algorithm, mode 15
      EMTF15.in_file_name = "PtRegression_May_2017_05_01_MODE_12_noBitCompr_noRPC.root";
      EMTF15.fact_name    = "f_MODE_15_logPtTarg_invPtWgt_bitCompr";
      EMTF15.MVA_name     = "EMTF_pt";
      EMTF15.unique_ID    = "EMTF_mode_15_15_0";
      EMTF15.alias        = "Mode 15";
      EMTF15.modes        = {15};
      EMTF15.modes_CSC    = {15};
      EMTF15.modes_RPC    = {0};  // No RPC hits allowed
      EMTF15.trg_pt_scale = 1./1.4;  // Had been scaled up by 1.4 from original regression 
      EMTF15.color        = 1;  // kBlack 

//      PtAlgo MVA1;
//      MVA1.in_file_name = "PtRegression_Apr_2017_04_20_MODE_15_noBitCompr.root";
//      MVA1.fact_name    = "f_MODE_15_logPtTarg_invPtWgt_noBitCompr";
//      MVA1.MVA_name     = "BDTG_AWB";
//      MVA1.unique_ID    = "BDT_CSC_only_uncompr_mode_15_15_0";
//      MVA1.alias        = "Mode 15 (15/0) CSC-only BDT, uncompressed";
//      MVA1.modes        = {15};
//      MVA1.modes_CSC    = {15};
//      MVA1.modes_RPC    = {0};  // No RPC hits allowed
//      MVA1.color        = 4;  // kBlue 
//
//      PtAlgo MVA2;
//      MVA2.in_file_name = "PtRegression_Apr_2017_04_20_MODE_15_bitCompr.root";
//      MVA2.fact_name    = "f_MODE_15_logPtTarg_invPtWgt_bitCompr";
//      MVA2.MVA_name     = "BDTG_AWB";
//      MVA2.unique_ID    = "BDT_CSC_only_compr_mode_15_15_0";
//      MVA2.alias        = "Mode 15 (15/0) CSC-only BDT, compressed";
//      MVA2.modes        = {15};
//      MVA2.modes_CSC    = {15};
//      MVA2.modes_RPC    = {0};  // No RPC hits allowed
//      MVA2.color        = 3;  // kGreen 
//
//      PtAlgo MVA3;
//      MVA3.in_file_name = "PtRegression_Apr_2017_04_20_MODE_15_bitCompr_RPC.root";
//      MVA3.fact_name    = "f_MODE_15_logPtTarg_invPtWgt_bitCompr_RPC";
//      MVA3.MVA_name     = "BDTG_AWB";
//      MVA3.unique_ID    = "BDT_CSC_RPC_compr_mode_15_15_0";
//      MVA3.alias        = "Mode 15 (15/0) CSC+RPC BDT, compressed";
//      MVA3.modes        = {15};
//      MVA3.modes_CSC    = {15};
//      MVA3.modes_RPC    = {0};  // No RPC hits allowed
//      MVA3.color        = 2;  // kRed 
//
//      PtAlgo MVA4;
//      MVA4.in_file_name = "PtRegression_Apr_2017_04_20_MODE_15_bitCompr_RPC.root";
//      MVA4.fact_name    = "f_MODE_15_logPtTarg_invPtWgt_bitCompr_RPC";
//      MVA4.MVA_name     = "BDTG_AWB";
//      MVA4.unique_ID    = "BDT_CSC_RPC_compr_mode_15_14_1";
//      MVA4.alias        = "Mode 15 (14/1) CSC+RPC BDT, compressed";
//      MVA4.modes        = {15};
//      MVA4.modes_CSC    = {14};
//      MVA4.modes_RPC    = {1};
//      MVA4.color        = 2;  // kRed 
//
//      PtAlgo MVA5;
//      MVA5.in_file_name = "PtRegression_Apr_2017_04_20_MODE_15_bitCompr_RPC.root";
//      MVA5.fact_name    = "f_MODE_15_logPtTarg_invPtWgt_bitCompr_RPC";
//      MVA5.MVA_name     = "BDTG_AWB";
//      MVA5.unique_ID    = "BDT_CSC_RPC_compr_mode_15_13_2";
//      MVA5.alias        = "Mode 15 (13/2) CSC+RPC BDT, compressed";
//      MVA5.modes        = {15};
//      MVA5.modes_CSC    = {13};
//      MVA5.modes_RPC    = {2};
//      MVA5.color        = 2;  // kRed 
//
//      PtAlgo MVA6;
//      MVA6.in_file_name = "PtRegression_Apr_2017_04_20_MODE_15_bitCompr_RPC.root";
//      MVA6.fact_name    = "f_MODE_15_logPtTarg_invPtWgt_bitCompr_RPC";
//      MVA6.MVA_name     = "BDTG_AWB";
//      MVA6.unique_ID    = "BDT_CSC_RPC_compr_mode_15_11_4";
//      MVA6.alias        = "Mode 15 (11/4) CSC+RPC BDT, compressed";
//      MVA6.modes        = {15};
//      MVA6.modes_CSC    = {11};
//      MVA6.modes_RPC    = {4};
//      MVA6.color        = 2;  // kRed 
//
//      PtAlgo MVA7;
//      MVA7.in_file_name = "PtRegression_Apr_2017_04_20_MODE_15_bitCompr_RPC.root";
//      MVA7.fact_name    = "f_MODE_15_logPtTarg_invPtWgt_bitCompr_RPC";
//      MVA7.MVA_name     = "BDTG_AWB";
//      MVA7.unique_ID    = "BDT_CSC_RPC_compr_mode_15_7_8";
//      MVA7.alias        = "Mode 15 (7/8) CSC+RPC BDT, compressed";
//      MVA7.modes        = {15};
//      MVA7.modes_CSC    = {7};
//      MVA7.modes_RPC    = {8};
//      MVA7.color        = 2;  // kRed 

      ALGOS.push_back(EMTF15);  // First algo is always the standard comparison algo
//      ALGOS.push_back(MVA1);
//      ALGOS.push_back(MVA2);
//      ALGOS.push_back(MVA3);
      /* ALGOS.push_back(MVA4); */
      /* ALGOS.push_back(MVA5); */
      /* ALGOS.push_back(MVA6); */
      /* ALGOS.push_back(MVA7); */


    } // End conditional: if (USER == "JTR")
    
  } // End function: inline void ConfigureUser()    

} // End namespace RateVsEff_cfg
