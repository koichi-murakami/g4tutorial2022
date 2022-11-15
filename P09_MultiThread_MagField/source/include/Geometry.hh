//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Geometry.hh
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
#ifndef Geometry_h
#define Geometry_h 1

#include "G4VUserDetectorConstruction.hh"

class G4VPhysicalVolume;
class G4GlobalMagFieldMessenger;

//------------------------------------------------------------------------------
  class Geometry : public G4VUserDetectorConstruction
//------------------------------------------------------------------------------
{
  public:
    Geometry();
   ~Geometry() override;

    G4VPhysicalVolume* Construct() override;
    void ConstructSDandField() override;

  private:  
    static G4ThreadLocal G4GlobalMagFieldMessenger* fMagFieldMessenger;
};
#endif




