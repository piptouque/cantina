//
// Created by binabik on 03/06/2020.
//

#include <cant/shift/MixedDomainPitchShifter.hpp>

#include <cant/common/CantinaException.hpp>

#include <cant/common/macro.hpp>
CANTINA_CANT_NAMESPACE_BEGIN

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
    shift(CANT_MAYBEUNUSED const cant::type_d src,
          CANT_MAYBEUNUSED const CANTINA_PAN_NAMESPACE::MidiNoteOutput &data,
          CANT_MAYBEUNUSED const sample_f *input,
          CANT_MAYBEUNUSED sample_f *output,
          CANT_MAYBEUNUSED const size_u blockSize)
    {

    }

CANTINA_CANT_NAMESPACE_END
