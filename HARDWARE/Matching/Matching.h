#ifndef MATCHING_H
#define MATCHING_H

/*@Mode: 
*0x01 ����
*0x02 ʯͷ
*0x03 ��
*0x04 1
*0x05 2
*0x06 3
*0x07 4
*0x08 5

@AcquisitionCapacitanceVal �ɼ����İ�ͨ������ֵ
*/

//ѵ��ģʽ
void TrainingMode(const unsigned char Mode,float *AcquisitionCapacitanceVal);

//��ȭ
unsigned char GuessingMatching(float *AcquisitionCapacitanceVal);

//��ȭ
unsigned char PunchMatching(float *AcquisitionCapacitanceVal);
typedef train_struct
{
	float aver

#endif
