class Time {
    int hr;
    int min;
    int sec;

    Time() {}

    Time(int hr, int min, int sec) {
        this.hr = hr;
        this.min = min;
        this.sec = sec;
    }

        void add(Time t1, Time t2) {
        sec = t1.sec + t2.sec;
        min = t1.min + t2.min + sec / 60;
        sec = sec % 60;

        hr = t1.hr + t2.hr + min / 60;
        min = min % 60;

        hr = hr % 24;
    }

    void add(Time t, int h) {
        hr = (t.hr + h) % 24;
        min = t.min;
        sec = t.sec;
    }

    void add(int m, Time t) {
        sec = t.sec;

        min = t.min + m;
        hr = t.hr + min / 60;
        min = min % 60;

        hr = hr % 24;
    }

    void add(Time t, int s, boolean seconds) {
        sec = t.sec + s;

        min = t.min + sec / 60;
        sec = sec % 60;

        hr = t.hr + min / 60;
        min = min % 60;

        hr = hr % 24;
    }

    void display() {
        System.out.printf("%02d:%02d:%02d\n", hr, min, sec);
    }
}

class SetTime {
    public static void main(String[] args) {

        Time t1 = new Time(22, 12, 25);
        Time t2 = new Time(3, 15, 27);

        Time result = new Time();

        result.add(t1, t2);
        result.display();

        result.add(t1, 2);
        result.display();

        result.add(50, t1);
        result.display();

        result.add(t1, 100, true);
        result.display();
    }
}