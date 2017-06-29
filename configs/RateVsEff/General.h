
// *** User *** ///
const TString USER = "JTR_lxplus";  // Settings applied in User.h

// *** Events to process *** //
const int MAX_EVT    =       -1;  // Number of events to process
const int REPORT_EVT =   100000;  // Report every Nth event during processing

// *** Muon / track settings *** //
<<<<<<< HEAD
const double ETAMIN  = 1.24;  // Minimum GEN / trigger eta to consider
const double ETAMAX  = 2.40;  // Maximum GEN / trigger eta to consider
=======
const double ETAMIN  = 1.20;  // Minimum GEN / trigger eta to consider
const double ETAMAX  = 2.50;  // Maximum GEN / trigger eta to consider
const int    ETABINS =   26;  // Number of bins in rate plots
>>>>>>> upstream/master

// *** Rate plot settings *** //
const double PTMIN   =  1.0;  // Minimum pT
const double PTMAX   = 51.0;  // Maximum pT
const int    PTBINS  =   50;  // Number of bins in rate plot

const int    PTDIVS  =   10;  // Number of trigger pT bins per GEN pT bin, before scaling
const double ERRMIN  = 0.02;  // Minimum per-bin uncertainty allowed in efficiency plots
const double BIT     = 0.1 * (PTMAX - PTMIN) / (PTBINS * PTDIVS);  // Small pT offset increment
