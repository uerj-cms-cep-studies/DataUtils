#ifndef Formats_DataTypes_h
#define Formats_DataTypes_h

// user include files
#include "DataFormats/VertexReco/interface/Vertex.h"
#include "DataFormats/HepMCCandidate/interface/GenParticle.h"
#include "DataFormats/JetReco/interface/GenJet.h"
#include "DataFormats/PatCandidates/interface/Jet.h"
#include "DataFormats/TrackReco/interface/Track.h"
#include "DataFormats/Common/interface/View.h"
#include "FastSimulation/PPSFastObjects/interface/PPSSpectrometer.h"
#include "FastSimulation/PPSFastObjects/interface/PPSGenData.h"
#include "FastSimulation/PPSFastObjects/interface/PPSSimData.h"
#include "FastSimulation/PPSFastObjects/interface/PPSRecoData.h"

// class declaration
class DataTypes {

  public:

    // typedefs
    typedef reco::Vertex Vertex;
    typedef reco::GenParticle GenParticle;
    typedef reco::GenJet GenJet;
    typedef pat::Jet Jet;
    typedef reco::Track Track;
    typedef edm::View<Vertex> VertexCollection;
    typedef edm::View<GenParticle> GenParticleCollection;
    typedef edm::View<GenJet> GenJetCollection;
    typedef edm::View<Jet> JetCollection;
    typedef edm::View<Track> TrackCollection;
    typedef PPSSpectrometer<PPSGenData> PPSGenCollection;
    typedef PPSSpectrometer<PPSSimData> PPSSimCollection;
    typedef PPSSpectrometer<PPSRecoData> PPSRecoCollection;
};

#endif
