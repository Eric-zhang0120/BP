
// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�

#pragma once

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN            // �� Windows ͷ���ų�����ʹ�õ�����
#endif

#include "targetver.h"

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS      // ĳЩ CString ���캯��������ʽ��

// �ر� MFC ��ĳЩ�����������ɷ��ĺ��Եľ�����Ϣ������
#define _AFX_ALL_WARNINGS

#include <afxwin.h>         // MFC ��������ͱ�׼���
#include <afxext.h>         // MFC ��չ


#include <afxdisp.h>        // MFC �Զ�����



#ifndef _AFX_NO_OLE_SUPPORT
#include <afxdtctl.h>           // MFC �� Internet Explorer 4 �����ؼ���֧��
#endif
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>             // MFC �� Windows �����ؼ���֧��
#endif // _AFX_NO_AFXCMN_SUPPORT

#include <afxcontrolbars.h>     // �������Ϳؼ����� MFC ֧��

//#include "..\Flood\MultilayerPerceptron\MultilayerPerceptron.h"
//
//#include "..\Flood\ObjectiveFunctional\MeanSquaredError.h"
//#include "..\Flood\ObjectiveFunctional\MinkowskiError.h"
//#include "..\Flood\ObjectiveFunctional\NormalizedSquaredError.h"
//#include "..\Flood\ObjectiveFunctional\ObjectiveFunctional.h"
//#include "..\Flood\ObjectiveFunctional\RootMeanSquaredError.h"
//#include "..\Flood\ObjectiveFunctional\SumSquaredError.h"
//
//#include "..\Flood\Perceptron\Perceptron.h"
//
//#include "..\Flood\TrainingAlgorithm\ConjugateGradient.h"
//#include "..\Flood\TrainingAlgorithm\EvolutionaryAlgorithm.h"
//#include "..\Flood\TrainingAlgorithm\GradientDescent.h"
//#include "..\Flood\TrainingAlgorithm\NewtonMethod.h"
//#include "..\Flood\TrainingAlgorithm\QuasiNewtonMethod.h"
//#include "..\Flood\TrainingAlgorithm\RandomSearch.h"
//#include "..\Flood\TrainingAlgorithm\TrainingAlgorithm.h"
//
//#include "..\Flood\Utilities\FunctionRegressionUtilities.h"
//#include "..\Flood\Utilities\InputTargetDataSet.h"
//#include "..\Flood\Utilities\IntegrationOfFunctions.h"
//#include "..\Flood\Utilities\Matrix.h"
//#include "..\Flood\Utilities\OrdinaryDifferentialEquations.h"
//#include "..\Flood\Utilities\PatternRecognitionUtilities.h"
//#include "..\Flood\Utilities\UnitTesting.h"
//#include "..\Flood\Utilities\Vector.h"



#ifdef _UNICODE
#if defined _M_IX86
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='x86' publicKeyToken='6595b64144ccf1df' language='*'\"")
#elif defined _M_X64
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='amd64' publicKeyToken='6595b64144ccf1df' language='*'\"")
#else
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")
#endif
#endif


