#include <BinaryClock.hpp>

void BinaryClock::createTime()
{
    timeParser_->extractTimeFromExpression();
    clockScreen_->showScreen(timeParser_);
}
