#ifndef _COMMANDERROR_H_
#define _COMMANDERROR_H_

#include "GeneralError.h"

//-401 => -500

#define SN_ERROR_COMMAND_BEGIN					(-400)

//δ֪����
#define SN_ERROR_COMMAND_UNKNOW					(SN_ERROR_COMMAND_BEGIN - 1)

//����ͷ��������
#define SN_ERROR_COMMAND_HEAD_PARSE_ERROR		(SN_ERROR_COMMAND_BEGIN - 2)

//����ͷ��������
#define SN_ERROR_COMMAND_HEAD_CREATE_ERROR		(SN_ERROR_COMMAND_BEGIN - 3)

//����ؽ�������
#define SN_ERROR_COMMAND_PAYLOAD_PARSE_ERROR	(SN_ERROR_COMMAND_BEGIN - 4)

//����ش�������
#define SN_ERROR_COMMAND_PAYLOAD_CREATE_ERROR	(SN_ERROR_COMMAND_BEGIN - 5)

//����汾����
#define SN_ERROR_COMMAND_VERSION_ERROR			(SN_ERROR_COMMAND_BEGIN - 6)




#endif // 
