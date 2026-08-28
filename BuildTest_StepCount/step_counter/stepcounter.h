#ifndef COUNTER_H //Prevents from reading header twice
#define COUNTER_H

class StepCounter {
    private:
        int counter;
    public:
        StepCounter();
        void Increment();
        int get();

};

#endif  //Ends the #ifndef part