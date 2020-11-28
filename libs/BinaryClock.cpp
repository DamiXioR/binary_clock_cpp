#include <BinaryClock.hpp>

void BinaryClock::createTime()
{
    timeParser_->extractTimeFromExpression();
    changeDecimalTimeUnitsToBinary();
    clockScreen_->showScreen(timeParser_, &binaryTimeUnitsHolder_);
}

void BinaryClock::changeDecimalTimeUnitsToBinary(){
    BinaryFromDecimalConverter converter{};
    binaryTimeUnitsHolder_.binaryHour_ = converter(timeParser_->getHours());
    binaryTimeUnitsHolder_.binaryMinutes_ = converter(timeParser_->getMinutes());
    binaryTimeUnitsHolder_.binarySeconds_ = converter(timeParser_->getSeconds());
}