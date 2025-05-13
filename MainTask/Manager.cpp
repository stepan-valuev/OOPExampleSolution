#include "Manger.h"

Group Manager::findBestStudents(Group group)
{
	double bestMark = 8.5;

	int bestCount = 0;

	for (int i = 0; i < group.getCount(); i++)
	{
		if (group.get(i).getAverageMark() >= bestMark)
		{
			bestCount++;
		}
	}

	Group best(bestCount);

	for (int i = 0, j = 0; i < group.getCount(); i++)
	{
		if (group.get(i).getAverageMark() >= bestMark)
		{
			bestGroup.set(j, group.get(i));
			j++;
		}
	}

	return bestList;
}

Group Manager::findWorstStudents(Group group)
{
	double worstMark = 6.0;

	worstGroup = 0;

	for (int i = 0; i < count; i++)
	{
		if (list[i].getAverageMark() <= worstMark)
		{
			worstCount++;
		}
	}

	Group worstGroup(worstCount);

	for (int i = 0, j = 0; i < group.getCount(); i++)
	{
		if (list[i].getAverageMark() <= worstMark)
		{
			worstList[j] = list[i];
			j++;
		}
	}

	return worstList;

}