//
// Created by binabik on 03/06/2020.
//

#include <cant/shift/MixedDomainPitchShifter.hpp>

namespace cant::shift
{

    MixedDomainPitchShifter::
    MixedDomainPitchShifter(UPtr<TimeDomainPitchShifter>&& auxShifter)
    : _auxShifter(std::move(auxShifter))
    {
        if(!_auxShifter)
        {
            throw CANTINA_EXCEPTION("Auxiliary shifter not set.");
        }
    }

    void
    MixedDomainPitchShifter::
    shift(sizeint iVoice, double src, const midi::MidiNoteOutput &data, const sample_m *input,
          sample_m *output, sizeint blockSize)
    {
        /*
        auto& band = _bands.at(iVoice);
        band.setPitchScale(shiftRatio);

        band.process(&input, blockSize, true);
        if(band.available())
        {
            band.retrieve(&output, blockSize);
        }
        */
    }

}
