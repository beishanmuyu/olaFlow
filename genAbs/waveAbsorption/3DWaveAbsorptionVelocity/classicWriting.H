    os.writeKeyword("nPaddles") << nPaddles_ << token::END_STATEMENT << nl;

    initialWaterDepths_.writeEntry("initialWaterDepths", os);
    meanAngles_.writeEntry("meanAngles", os);
    zSpanL_.writeEntry("zSpanL", os);

    #if OFVERSION >= 1712
        os.writeEntryIfDifferent<label>("nEdgeMin", 0, nEdgeMin_);
        os.writeEntryIfDifferent<label>("nEdgeMax", 0, nEdgeMax_);
    #else
        writeEntryIfDifferent<label>(os, "nEdgeMin", 0, nEdgeMin_);
        writeEntryIfDifferent<label>(os, "nEdgeMax", 0, nEdgeMax_);
    #endif
    
    os.writeKeyword("allCheck") << allCheck_ << token::END_STATEMENT << nl;

    writeEntry("value", os);