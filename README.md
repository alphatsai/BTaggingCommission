# BTaggingCommission
ttbar leptonic channel

## BTag Ntuples ( including ttbar selections )

### .py file
runBTagAnalyzer_cfg.py

```bash
cmsRun runBTagAnalyzer_cfg.py maxEvents=100 reportEvery=1 wantSummary=True  useTTbarFilter=True
```

```python
useTTbarFilter=True

process.btagana.useSelectedTracks = False 
process.btagana.useTrackHistory = False 
process.btagana.fillsvTagInfo = True 
process.btagana.produceJetTrackTree = True 
process.btagana.produceAllTrackTree = True 
process.btagana.storeTagVariables = True 
process.btagana.storeCSVTagVariables = True
```

### Commissioning samples 
#### Data
- Run2015: /eos/cms/store/group/phys_btag/Commissioning/TTbar/25ns/
Data13TeV_MuonEG_2015C
Data13TeV_MuonEG_2015D
MC13TeV_TTJets_powheg_pythia8
MC13TeV_DY10to50
MC13TeV_DY50toInf
MC13TeV_SingleTbar_tW
MC13TeV_SingleT_tW
MC13TeV_WWTo2L2Nu
MC13TeV_WZ
M3C13TeV_ZZ

- Run2016 May (Updating...):

dataset dataset=/TT_TuneCUETP8M1_13TeV-powheg-pythia8/*80X*/MINIAODSIM status=*

##### submition command:
```bash
python submitToGrid.py -j data/samples_Run2015_25ns.json -c ${CMSSW_BASE}/src/RecoBTag/PerformanceMeasurements/test/runBTagAnalyzer_cfg.py --lfn [outputEOSDir] -l [lumi.json] -w [workdir] -s
```
#### MC
- CMSSW_8_0_5_patch1
**ttbar**
Example on cmseos: /afs/cern.ch/user/j/jtsai/eos/cms/store/mc/RunIISpring16DR80/TT_TuneCUETP8M1_13TeV-powheg-pythia8/MINIAODSIM/PUSpring16_80X_mcRun2_asymptotic_2016_v3_ext3-v1/70000/60910103-2F20-E611-A5E6-02163E0115FF.root

/TTTo2L2Nu_noSC_TuneCUETP8M1_alphaS01273_13TeV-powheg-pythia8/RunIISpring16MiniAODv2-PUSpring16_80X_mcRun2_asymptotic_2016_miniAODv2_v0-v1/MINIAODSIM

/ST_tW_top_5f_NoFullyHadronicDecays_13TeV-powheg_TuneCUETP8M1/RunIISpring16MiniAODv2-PUSpring16_80X_mcRun2_asymptotic_2016_miniAODv2_v0-v1/MINIAODSIM

/WW_TuneCUETP8M1_13TeV-pythia8/RunIISpring16MiniAODv2-PUSpring16_80X_mcRun2_asymptotic_2016_miniAODv2_v0-v1/MINIAODSIM
/WZ_TuneCUETP8M1_13TeV-pythia8/RunIISpring16MiniAODv2-PUSpring16_80X_mcRun2_asymptotic_2016_miniAODv2_v0-v1/MINIAODSIM
/ZZ_TuneCUETP8M1_13TeV-pythia8/RunIISpring16MiniAODv2-PUSpring16_80X_mcRun2_asymptotic_2016_miniAODv2_v0-v1/MINIAODSIM


- CMSSW_8_0_3_patch1
**ttbar**
/TT_TuneCUETP8M1_13TeV-powheg-pythia8/RunIISpring16MiniAODv1-PUSpring16_80X_mcRun2_asymptotic_2016_v3_ext3-v1/MINIAODSIM

/TTTo2L2Nu_noSC_TuneCUETP8M1_alphaS01273_13TeV-powheg-pythia8/RunIISpring16MiniAODv1-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1/MINIAODSIM
/TT_TuneCUETP8M1noCR_13TeV-powheg-pythia8/RunIISpring16MiniAODv1-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1/MINIAODSIM
/TT_TuneCUETP8M1mpiOFF_13TeV-powheg-pythia8/RunIISpring16MiniAODv1-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1/MINIAODSIM

Not use
/TTTo2L2Nu_TuneCUETP8M1_alphaS01273_13TeV-powheg-scaleup-pythia8/RunIISpring16MiniAODv2-PUSpring16_80X_mcRun2_asymptotic_2016_miniAODv2_v0-v1/MINIAODSIM
/TTTo2L2Nu_TuneCUETP8M1_alphaS01273_13TeV-powheg-scaleup-pythia8/RunIISpring16MiniAODv1-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1/MINIAODSIM
/TT_TuneCUETP8M1_13TeV-powheg-scaledown-pythia8/RunIISpring16MiniAODv1-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1/MINIAODSIM
/TT_TuneCUETP8M1_13TeV-powheg-scaleup-pythia8/RunIISpring16MiniAODv1-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1/MINIAODSIM

**DY** 
/DYJetsToLL_M-10to50_TuneCUETP8M1_13TeV-amcatnloFXFX-pythia8/RunIISpring16MiniAODv1-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1/MINIAODSIM
/DYJetsToLL_M-50_TuneCUETP8M1_13TeV-amcatnloFXFX-pythia8/RunIISpring16MiniAODv1-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1/MINIAODSIM

/DYJetsToLL_M-10to50_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/RunIISpring16MiniAODv1-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1/MINIAODSIM
/DYJetsToLL_M-50_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/RunIISpring16MiniAODv1-PUFlat0to50_80X_mcRun2_asymptotic_2016_v3-v1/MINIAODSIM

**Single t (tW)**
/ST_tW_top_5f_inclusiveDecays_13TeV-powheg-pythia8_TuneCUETP8M1/RunIISpring16MiniAODv1-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1/MINIAODSIM
/ST_tW_antitop_5f_inclusiveDecays_13TeV-powheg-pythia8_TuneCUETP8M1/RunIISpring16MiniAODv1-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1/MINIAODSIM

/ST_tW_top_5f_NoFullyHadronicDecays_13TeV-powheg_TuneCUETP8M1/RunIISpring16MiniAODv1-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1/MINIAODSIM
/ST_tW_antitop_5f_NoFullyHadronicDecays_13TeV-powheg_TuneCUETP8M1/RunIISpring16MiniAODv1-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v2/MINIAODSIM

**WWTo2L2Nu, WZ, ZZ**
/WWTo2L2Nu_13TeV-powheg/RunIISpring16MiniAODv1-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1/MINIAODSIM
/WWTo2L2Nu_13TeV-powheg-herwigpp/RunIISpring16MiniAODv1-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1/MINIAODSIM

/WZ_TuneCUETP8M1_13TeV-pythia8/RunIISpring16MiniAODv1-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1/MINIAODSIM
/ZZ_TuneCUETP8M1_13TeV-pythia8/RunIISpring16MiniAODv1-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v2/MINIAODSIM


### Root contain
- tree
btagana/ttree
- tatal event number in TH1F
ttbarselectionproducer/wgtcounter GetBinContent(1)
allEventCount/hEventCount GetEntries()
- size 
7 Kbit/evt

## Usage for macros in : RecoBTag/PerformanceMeasurements/test/BTagAnalyzerMacros
### ttbar leptonic analysis codes
#### .C 
1. TTbarSelector.C
    * Corrections and efficiency weighting
    * Event selection
        1. HLT
        2. nLeptons == 2
        3. e+mu channel 
        4. nJets >= 2
        5. Mass_ll >= 12 
    * Jets cleaning 
        1. far away from leptons dR > 0.4
        2. pt > 20
        3. |eta| < 2.4
    
2. CommPlotProducer4ttbar.C
    * Define class "CommPlotProducer4ttbar"
    * Use "TTbarSelector.C" to select event and objects
    * Only care e+mu channel : because clean without Z background.
    * Create plots
        * Jet related
            1. AddHisto()
                b  : 0
                pu : 1
                c  : 2
                lq : 3
                data : 4   
        * Datatype
            1. AddHistottbar()
               ttbar : 1  -> in HistoTTbar 0
               DellY : 2  -> in HistoTTbar 1
               SigleT: 3  -> in HistoTTbar 2
               ww    : 4  -> in HistoTTbar 3
               wz    : 5  -> in HistoTTbar 4
               zz    : 6  -> in HistoTTbar 5
               data  : 0  -> in HistoTTbar 6
          
    * Store plots.
        * Jets related
            1. Count multiplicity for SF
        nJets == 2 (pt>=30)
                Split 3 pT region <60, 60-120, 120-320
            2. multiplicity
            3. tracks in Jets
                n-1 plots                3-leading tracks
                * Selections
                    nHits > 7 
                    nPix  > 1
                    |ipZ| < 17
                    pT    > 1
                    Chi2  < 5
                    |dist|<0.07
                    length<5
                    |ip2D|<0.2
            4. TagVarCSV info
            5. SV related (nSV>0)
            6. Discrimenates
            7. Soft lepton
            8. PF leptons from jets
        * SF related
 
3. runCode4ttbar.C
    * Running the analysis code (class) : CommPlotProducer4ttbar.C (CommPlotProducer4ttbar)
    * Input merged-tree root file
    * Input weighting 
    * Systemetic uncertainty by vector "systlist" with special string (no commissioning plots with systs )
        * "__plus" and "__minus"
        * "lept", "trig", "PU", "jes", "jer", "PDF", "scale1", "scale2", "metuncls", "toppt", "btag", "mistag"

#### .h
1. TTbarSelector.h
    * Define class "TTbarSelector"

2. CommPlotProducer4ttbar.h
    * Define class "CommPlotProducer4ttbar"
    * Load "../TTbarSelector.h"

### ttbar leptonic plotting macros #####
#### .C
1. DrawCommPlot4ttbar.C 


### README.d #####

#### To run the ttbar analysis in order to produce commissioning plots or performance to compute SF:

root -l
gROOT->ProcessLine(".L ../TTbarSelector.C+"); 
gROOT->ProcessLine(".L CommPlotProducer4ttbar.C++"); 
.x runCode4ttbar.C+

#### To draw plots,

root -l
gROOT->ProcessLine(".L DrawCommPlot4ttbar.C++");

#### In BTV-15-001:

Draw("track_IPs" , "3D IP significance of tracks",1); 
Draw("sv_flight3DSig","SV 3D flight distance significance",1); 
Draw("tagvarCSV_vertexmass_cat0","SV mass [GeV]",0); 
Draw("JP" ,"JP Discriminator",1); 
Draw("CSVv2","CSVv2 Discriminator",1); 
Draw("CSV" ,"CSVv2(AVR) Discriminator",1); 
Draw("JBP" ,"JBP Discriminator",1); 
Draw("SoftMu" ,"SM Discriminator",1); 
Draw("SoftEl" ,"SE Discriminator",1); 
Draw("cMVAv2","cMVAv2 Discriminator",1);

DrawTTbar("nbtag_all_afterJetSel_CSVv2M_SFapplied","number of b-tagged jets (CSVv2M)",0); 
DrawTTbar("nbtag_all_afterJetSel_CSVv2M","number of b-tagged jets (CSVv2M)",0);

## In AN-16-036:

Draw("jet_pt_all" ,"Jet pT",1); 
Draw("jet_eta" ,"Jet eta", 0); 
Draw("trk_multi_sel" , "Number of selected tracks in the jets",0); 
Draw("track_pt" , "Track p_{T}",1); 
Draw("track_nHit" , "number of hits",0); 
Draw("track_HPix" , "Number of hits in the Pixel",0); 
Draw("track_chi2" , "Normalized #chi^{2} of tracks" ,1); 
Draw("track_dist" , "Track distance to the jet axis" ,1); 
Draw("track_len" , "Track decay length",1); 
Draw("track_IP" , "3D IP of tracks",1); 
Draw("track_IPs" , "3D IP significance of tracks",1); 
Draw("sv_multi_0","nr. of SV including bin 0",1); 
Draw("sv_flight3DSig","SV 3D flight distance significance",1); 
Draw("sv_deltaR_jet","Delta R between the jet and the SV direction.",0); 
Draw("tagvarCSV_vertexmass_cat0","SV mass [GeV]",0); 
Draw("tagvarCSV_vertexmass3trk_cat0","SV mass (at least 3 tracks) [GeV]",0); 
Draw("tagvarCSV_vertexCategory","Vertex Category",1); 
Draw("pfmuon_multi" , "number of pf muons", 1); 
Draw("pfmuon_pt" , "p_{T} of pf muons [GeV]",1); 
Draw("pfmuon_ptrel" , "p_{T} rel. of pf muons [GeV]",0); 
Draw("JP" ,"JP Discriminator",1); 
Draw("JBP" ,"JBP Discriminator",1); 
Draw("CSVv2","CSVv2 Discriminator",1); 
Draw("cMVAv2","cMVAv2 Discriminator",1); 
Draw("CSV" ,"CSVv2(AVR) Discriminator",1); 

//// not anymore in the tree Draw("SoftEl" ,"SE Discriminator",1); Draw("SoftMu" ,"SM Discriminator",1); Draw("TCHP" ,"TCHP Discriminator",1); Draw("discri_ssche0", "SSVHE Discriminator", 1);

DrawTTbar("nbtag_all_afterJetSel_CSVv2L","number of b-tagged jets (CSVv2L)",0); 
DrawTTbar("nbtag_all_afterJetSel_CSVv2M","number of b-tagged jets (CSVv2M)",0); 
DrawTTbar("nbtag_all_afterJetSel_CSVv2T","number of b-tagged jets (CSVv2T)",0);

DrawTTbar("nbtag_all_afterJetSel_cMVAv2L","number of b-tagged jets (cMVAv2L)",0); 
DrawTTbar("nbtag_all_afterJetSel_cMVAv2M","number of b-tagged jets (cMVAv2M)",0); 
DrawTTbar("nbtag_all_afterJetSel_cMVAv2T","number of b-tagged jets (cMVAv2T)",0);

DrawTTbar("njet","number of jets",0);


############# Caculate lumi ##################
[jtsai@lxplus023 jtsai]$ setenv PATH ${HOME}/.local/bin:/afs/cern.ch/cms/lumi/brilconda-1.0.3/bin:${PATH}
[jtsai@lxplus023 jtsai]$ pip install --install-option="--prefix=${HOME}/.local" brilws
You are using pip version 7.0.3, however version 8.1.2 is available.
You should consider upgrading via the 'pip install --upgrade pip' command.
/afs/cern.ch/cms/lumi/brilconda-1.0.3/lib/python2.7/site-packages/pip/commands/install.py:197: UserWarning: Disabling all use of wheels due to the use of --build-options / --global-options / --install-options.
  cmdoptions.check_install_build_global(options)
Collecting brilws
  Using cached brilws-2.0.2.tar.gz
Installing collected packages: brilws
  Running setup.py install for brilws
Successfully installed brilws
[jtsai@lxplus023 jtsai]$ brilcalc lumi -u /pb --normtag ~lumipro/public/normtag_file/normtag_DATACERT.json -i /afs/cern.ch/cms/CAF/CMSCOMM/COMM_DQM/certification/Collisions16/13TeV/Cert_271036-273450_13TeV_PromptReco_Collisions16_JSON_NoL1T.txt
#Data tag : online , Norm tag: composite
+-------------+-------------------+------+------+----------------+---------------+
| run:fill    | time              | nls  | ncms | delivered(/pb) | recorded(/pb) |
+-------------+-------------------+------+------+----------------+---------------+
| 273158:4915 | 05/11/16 20:42:35 | 1279 | 1279 | 53.934         | 50.634        |
| 273291:4919 | 05/12/16 20:23:51 | 77   | 77   | 3.273          | 2.757         |
| 273299:4919 | 05/12/16 21:55:32 | 43   | 43   | 1.867          | 1.748         |
| 273301:4919 | 05/12/16 22:14:12 | 602  | 602  | 24.647         | 23.465        |
| 273302:4919 | 05/13/16 02:13:38 | 459  | 459  | 17.075         | 16.380        |
| 273402:4924 | 05/14/16 01:49:19 | 193  | 193  | 7.006          | 6.629         |
| 273403:4924 | 05/14/16 03:05:27 | 53   | 53   | 1.932          | 1.834         |
| 273404:4924 | 05/14/16 03:31:50 | 18   | 18   | 0.652          | 0.615         |
| 273405:4924 | 05/14/16 03:42:09 | 25   | 25   | 0.902          | 0.839         |
| 273406:4924 | 05/14/16 03:56:09 | 112  | 112  | 3.978          | 3.798         |
| 273408:4924 | 05/14/16 04:52:04 | 6    | 6    | 0.211          | 0.182         |
| 273409:4924 | 05/14/16 04:56:41 | 309  | 309  | 10.614         | 9.535         |
| 273410:4924 | 05/14/16 06:59:49 | 90   | 90   | 3.006          | 2.762         |
| 273411:4924 | 05/14/16 07:38:50 | 29   | 29   | 0.800          | 0.750         |
| 273425:4925 | 05/14/16 11:17:57 | 671  | 671  | 26.668         | 25.357        |
| 273446:4926 | 05/14/16 20:06:55 | 33   | 33   | 2.161          | 2.021         |
| 273447:4926 | 05/14/16 20:26:09 | 408  | 408  | 25.678         | 24.449        |
| 273449:4926 | 05/15/16 01:48:09 | 214  | 214  | 11.732         | 11.192        |
| 273450:4926 | 05/15/16 03:19:37 | 643  | 643  | 32.253         | 30.883        |
+-------------+-------------------+------+------+----------------+---------------+
#Summary:
+-------+------+------+------+-------------------+------------------+
| nfill | nrun | nls  | ncms | totdelivered(/pb) | totrecorded(/pb) |
+-------+------+------+------+-------------------+------------------+
| 5     | 19   | 5264 | 5264 | 228.390           | 215.829          |
+-------+------+------+------+-------------------+------------------+
#Check JSON:
#(run,ls) in json but not in results: [(273447, 32), (273447, 37), (273447, 41)]
