CXX = g++-5
CXXFLAGS = -std=c++14 -Wall -MMD -Werror=vla -g
EXEC =cc3k+
OBJECTS = invalidmove.o pctype.o direction.o subject.o observer.o textdisplay.o game.o dungeon.o floor.o chamber.o cell.o wall.o void.o stair.o floortile.o door.o passage.o character.o item.o player.o enemy.o major.o treasure.o potion.o orc.o elves.o dwarf.o human.o goblin.o werewolf.o vampire.o troll.o phoenix.o merchant.o dragon.o compass.o barriersuit.o normal.o smallhorde.o merchanthoard.o dragonhoard.o restorehealth.o poisonhealth.o boostatk.o woundatk.o boostdef.o wounddef.o main.o

EPENDS = ${OBJECTS:.o=.d}

${EXEC}: ${OBJECTS}
	${CXX} ${CXXFLAGS} ${OBJECTS} -o ${EXEC}

-include ${DEPENDS}

clean:
	rm ${OBJECTS} ${EXEC} ${DEPENDS}
