{
    //////////////////////////////////////////////
    //        Choose between BTag or CTag      //
    /////////////////////////////////////////////         
    bool BTag = true; //false for CTag commissioning

    // Options for CommPlotProducer4ttbar::Loop
    TString syst="";

    //set the range of ntuples to run on (iname[Nsamples])
    const int i=runN;

    const int Nsamples=18;
    TString iname[Nsamples] = { 
        "Data13TeV_MuonEG_2016G",  // 0
        //"MC13TeV_TTJets_powheg_pythia8_0", // 2
        //"MC13TeV_TTJets_powheg_pythia8_1", // 2
        //"MC13TeV_TTJets_powheg_pythia8_2", // 2
        //"MC13TeV_TTJets_powheg_pythia8_3", // 2
        //"MC13TeV_TTJets_powheg_pythia8_4", // 2
        //"MC13TeV_TTJets_powheg_pythia8_5", // 2
        //"MC13TeV_TTJets_powheg_pythia8_6", // 2
        //"MC13TeV_TTJets_powheg_pythia8_7", // 2
        //"MC13TeV_TTJets_powheg_pythia8_8", // 2
        //"MC13TeV_TTJets_powheg_pythia8_9", // 2
        //"MC13TeV_TTJets_powheg_pythia8_10", // 2
        //"MC13TeV_TTJets_powheg_pythia8_11", // 2
        //"MC13TeV_TTJets_powheg_pythia8_12", // 2
        //"MC13TeV_TTJets_powheg_pythia8_13", // 2
        //"MC13TeV_TTJets_powheg_pythia8_14", // 2
        //"MC13TeV_TTJets_powheg_pythia8_15", // 2
        //"MC13TeV_TTJets_powheg_pythia8_16", // 2
        //"MC13TeV_TTJets_powheg_pythia8_17", // 2
        //"MC13TeV_TTJets_powheg_pythia8_18", // 2
        //"MC13TeV_TTJets_powheg_pythia8_19", // 2
        //"MC13TeV_TTJets_powheg_pythia8_20", // 2
        "MC13TeV_DY10to50",              // 3
        "MC13TeV_DY50toInf_0",             // 4
        "MC13TeV_DY50toInf_1",             // 4
        "MC13TeV_DY50toInf_2",             // 4
        "MC13TeV_DY50toInf_3",             // 4
        "MC13TeV_DY50toInf_4",             // 4
        "MC13TeV_DY50toInf_5",             // 4
        "MC13TeV_DY50toInf_6",             // 4
        "MC13TeV_DY50toInf_7",             // 4
        "MC13TeV_DY50toInf_8",             // 4
        "MC13TeV_DY50toInf_9",             // 4
        "MC13TeV_DY50toInf_10",             // 4
        "MC13TeV_SingleT_tW",            // 5
        "MC13TeV_SingleTbar_tW",         // 6
        "MC13TeV_WW",                    // 7
        "MC13TeV_WZ",                    // 8 
        "MC13TeV_ZZ"                     // 9
    }; 
    TString oname[Nsamples] = { 
        "output_dataG_mueg",
        //"output_ttbar_0",
        //"output_ttbar_1",
        //"output_ttbar_2",
        //"output_ttbar_3",
        //"output_ttbar_4",
        //"output_ttbar_5",
        //"output_ttbar_6",
        //"output_ttbar_7",
        //"output_ttbar_8",
        //"output_ttbar_9",
        //"output_ttbar_10",
        //"output_ttbar_11",
        //"output_ttbar_12",
        //"output_ttbar_13",
        //"output_ttbar_14",
        //"output_ttbar_15",
        //"output_ttbar_16",
        //"output_ttbar_17",
        //"output_ttbar_18",
        //"output_ttbar_19",
        //"output_ttbar_20",
        "output_dy1",
        "output_dy2_0",
        "output_dy2_1",
        "output_dy2_2",
        "output_dy2_3",
        "output_dy2_4",
        "output_dy2_5",
        "output_dy2_6",
        "output_dy2_7",
        "output_dy2_8",
        "output_dy2_9",
        "output_dy2_10",
        "output_st1",
        "output_st2",
        "output_ww",
        "output_wz",
        "output_zz" 
    };

    //bool isData[Nsamples] = {1, 1, 0, 0, 0, 0, 0, 0, 0, 0 }; 

    TString samplepath="root://eoscms.cern.ch//eos/cms/store/group/phys_btag/Commissioning/TTbar/Run2016/112016_23SeptReReco/test";
    TString sampleroot="MergedJetTree.root";

    // Run... 
    TFile* f = TFile::Open(samplepath+"/"+iname[i]+"/"+sampleroot);
    TChain* tree = (TChain*)f->Get("btagana/ttree");
    CommPlotProducer4ttbar *run = new CommPlotProducer4ttbar(tree,1,1,0);

    //if( !isData[i] )
    if( i != 0 )
    {
        TH1F* inputWeight = (TH1F*)f->Get("ttbarselectionproducer/wgtcounter");
        run->Loop( 0, oname[i], inputWeight, syst);
    }
    else
    {
        run->Loop( 1, oname[i], 0, syst);
    }

}
