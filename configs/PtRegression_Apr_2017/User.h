
// *** Default user settings *** //
TString OUT_DIR_NAME  = ".";  // Directory for output ROOT file
TString OUT_FILE_NAME = "PtRegression_Apr_2017";  // Name base for output ROOT file
TString EOS_DIR_NAME  = "root://eoscms.cern.ch//store/user/abrinke1/EMTF/Emulator/ntuples";  // Input directory in eos

namespace PtRegression_Apr_2017_cfg {
  
  inline void ConfigureUser( const TString USER ) {
    
    std::cout << "\nConfiguring PtRegression_Apr_2017 code for user " << USER << std::endl;
    
    if (USER == "AWB") {
      EOS_DIR_NAME = "root://eoscms.cern.ch//store/user/abrinke1/EMTF/Emulator/ntuples";  // Input directory in eos
      OUT_DIR_NAME = "/afs/cern.ch/work/a/abrinke1/public/EMTF/PtAssign2017/files";
      OUT_FILE_NAME = "PtRegression_Apr_2017_06_05_invPtTarg_invPtWgt";
    }
    if (USER == "JTR_bonner") {
      EOS_DIR_NAME = "/storage1/users/jtr6/emtf_training_data/";  // Input directory in eos
      OUT_DIR_NAME  = "/storage1/users/jtr6/EMTF_ML_training_results/";
      OUT_FILE_NAME = "PtRegression_Apr_2017_06_05_invPtTarg_invPtWgt";
    }
    if (USER == "MLM") {
      EOS_DIR_NAME = "/storage1/users/jtr6/emtf_training_data/";  // Input directory in eos
      OUT_DIR_NAME  = "/storage1/users/mlm15/EMTF_ML_training_results/";
      OUT_FILE_NAME = "PtRegression_Apr_2017_06_05_invPtTarg_invPtWgt";

    }
    
  } // End function: inline void ConfigureUser()    
  
} // End namespace PtRegression_Apr_2017_cfg
