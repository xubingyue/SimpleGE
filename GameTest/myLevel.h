#pragma once

#include "SimpleGE.h"

class LevelOne : public Level {
private:
    int count;
public:
    LevelOne();
    ~LevelOne();

    CREATE_FUNC(LevelOne);

    virtual bool init();
    virtual void update();
};

class LevelTwo : public Level {
private:
    int count;
public:
    LevelTwo();
    ~LevelTwo();

    CREATE_FUNC(LevelTwo);

    virtual bool init();
    virtual void update();
};

class LevelThree : public Level {
private:
	int count;
public:
	LevelThree();
	~LevelThree();

	CREATE_FUNC(LevelThree);

	virtual bool init();
	virtual void update();
};