/****************************************************************************
** Meta object code from reading C++ file 'datamgr.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../datamgr.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'datamgr.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DataMgr_t {
    QByteArrayData data[104];
    char stringdata0[2407];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DataMgr_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DataMgr_t qt_meta_stringdata_DataMgr = {
    {
QT_MOC_LITERAL(0, 0, 7), // "DataMgr"
QT_MOC_LITERAL(1, 8, 8), // "finished"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 5), // "error"
QT_MOC_LITERAL(4, 24, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(5, 52, 14), // "onCallContract"
QT_MOC_LITERAL(6, 67, 21), // "onCallContractTesting"
QT_MOC_LITERAL(7, 89, 26), // "onWalletTransferToContract"
QT_MOC_LITERAL(8, 116, 33), // "onWalletTransferToContractTes..."
QT_MOC_LITERAL(9, 150, 17), // "onGetContractInfo"
QT_MOC_LITERAL(10, 168, 7), // "onAbout"
QT_MOC_LITERAL(11, 176, 9), // "onGetInfo"
QT_MOC_LITERAL(12, 186, 12), // "assetTypeGet"
QT_MOC_LITERAL(13, 199, 17), // "onValidateAddress"
QT_MOC_LITERAL(14, 217, 16), // "onRpcSetUserName"
QT_MOC_LITERAL(15, 234, 16), // "onRpcSetPassword"
QT_MOC_LITERAL(16, 251, 16), // "onRpcStartServer"
QT_MOC_LITERAL(17, 268, 15), // "onNtpUpdateTime"
QT_MOC_LITERAL(18, 284, 11), // "onDiskUsage"
QT_MOC_LITERAL(19, 296, 16), // "onNetworkAddNode"
QT_MOC_LITERAL(20, 313, 16), // "onNetworkGetInfo"
QT_MOC_LITERAL(21, 330, 27), // "onNetworkGetConnectionCount"
QT_MOC_LITERAL(22, 358, 20), // "onNetworkGetPeerInfo"
QT_MOC_LITERAL(23, 379, 27), // "onNetworkListPotentialPeers"
QT_MOC_LITERAL(24, 407, 20), // "onNetworkGetUpnpInfo"
QT_MOC_LITERAL(25, 428, 15), // "onExecuteScript"
QT_MOC_LITERAL(26, 444, 19), // "onDelegateGetConfig"
QT_MOC_LITERAL(27, 464, 38), // "onDelegateSetNetworkMinConnec..."
QT_MOC_LITERAL(28, 503, 37), // "onDelegateSetBlockMaxTransact..."
QT_MOC_LITERAL(29, 541, 25), // "onDelegateSetBlockMaxSize"
QT_MOC_LITERAL(30, 567, 31), // "onDelegateSetTransactionMaxSize"
QT_MOC_LITERAL(31, 599, 30), // "onDelegateSetTransactionMinFee"
QT_MOC_LITERAL(32, 630, 9), // "onBalance"
QT_MOC_LITERAL(33, 640, 6), // "onLock"
QT_MOC_LITERAL(34, 647, 23), // "onExecuteConsoleCommand"
QT_MOC_LITERAL(35, 671, 32), // "onBlockChainGetBlockTransactions"
QT_MOC_LITERAL(36, 704, 22), // "onBlockChainGetAccount"
QT_MOC_LITERAL(37, 727, 19), // "onBlockChainGetInfo"
QT_MOC_LITERAL(38, 747, 28), // "onBlockChainGenerateSnapshot"
QT_MOC_LITERAL(39, 776, 20), // "onBlockChainIsSynced"
QT_MOC_LITERAL(40, 797, 25), // "onBlockChainGetBlockCount"
QT_MOC_LITERAL(41, 823, 22), // "onBlockChainGetBalance"
QT_MOC_LITERAL(42, 846, 27), // "onBlockChainListKeyBalances"
QT_MOC_LITERAL(43, 874, 31), // "onBlockChainListActiveDelegates"
QT_MOC_LITERAL(44, 906, 24), // "onBlockChainListAccounts"
QT_MOC_LITERAL(45, 931, 35), // "onBlockChainListPendingTransa..."
QT_MOC_LITERAL(46, 967, 22), // "onBlockChainListAssets"
QT_MOC_LITERAL(47, 990, 26), // "onBlockChainGetTransaction"
QT_MOC_LITERAL(48, 1017, 25), // "onBlockChainListDelegates"
QT_MOC_LITERAL(49, 1043, 22), // "onBlockChainListBlocks"
QT_MOC_LITERAL(50, 1066, 26), // "onBlockChainGetBlockSignee"
QT_MOC_LITERAL(51, 1093, 20), // "onBlockChainGetBlock"
QT_MOC_LITERAL(52, 1114, 14), // "onWalletCreate"
QT_MOC_LITERAL(53, 1129, 15), // "onWalletGetInfo"
QT_MOC_LITERAL(54, 1145, 13), // "onWalletClose"
QT_MOC_LITERAL(55, 1159, 12), // "onWalletOpen"
QT_MOC_LITERAL(56, 1172, 14), // "onWalletUnlock"
QT_MOC_LITERAL(57, 1187, 24), // "onWalletImportPrivateKey"
QT_MOC_LITERAL(58, 1212, 32), // "onWalletImportRegisterPrivateKey"
QT_MOC_LITERAL(59, 1245, 20), // "onWalletBackupCreate"
QT_MOC_LITERAL(60, 1266, 21), // "onWalletBackupRestore"
QT_MOC_LITERAL(61, 1288, 27), // "onWalletSetAutomaticBackups"
QT_MOC_LITERAL(62, 1316, 36), // "onWalletSetTransactionExpirat..."
QT_MOC_LITERAL(63, 1353, 33), // "onWalletAccountTransactionHis..."
QT_MOC_LITERAL(64, 1387, 32), // "onWalletTransactionHistorySplite"
QT_MOC_LITERAL(65, 1420, 38), // "onWalletTransactionHistorySpl..."
QT_MOC_LITERAL(66, 1459, 35), // "onWalletGetPendingTransaction..."
QT_MOC_LITERAL(67, 1495, 24), // "onWalletChangePassphrase"
QT_MOC_LITERAL(68, 1520, 23), // "onWalletCheckPassphrase"
QT_MOC_LITERAL(69, 1544, 20), // "onWalletCheckAddress"
QT_MOC_LITERAL(70, 1565, 21), // "onWalletAccountCreate"
QT_MOC_LITERAL(71, 1587, 26), // "onWalletAccountSetApproval"
QT_MOC_LITERAL(72, 1614, 25), // "onWalletTransferToAddress"
QT_MOC_LITERAL(73, 1640, 31), // "onWalletTransferToAddressWithId"
QT_MOC_LITERAL(74, 1672, 31), // "onWalletTransferToPublicAccount"
QT_MOC_LITERAL(75, 1704, 37), // "onWalletTransferToPublicAccou..."
QT_MOC_LITERAL(76, 1742, 24), // "onWalletRescanBlockchain"
QT_MOC_LITERAL(77, 1767, 18), // "onWalletCancelScan"
QT_MOC_LITERAL(78, 1786, 22), // "onWalletGetTransaction"
QT_MOC_LITERAL(79, 1809, 22), // "onWalletAccountRegiste"
QT_MOC_LITERAL(80, 1832, 23), // "onWalletListMyAddresses"
QT_MOC_LITERAL(81, 1856, 20), // "onWalletListAccounts"
QT_MOC_LITERAL(82, 1877, 32), // "onWalletListUnregisteredAccounts"
QT_MOC_LITERAL(83, 1910, 22), // "onWalletListMyAccounts"
QT_MOC_LITERAL(84, 1933, 31), // "onWalletGetAccountPublicAddress"
QT_MOC_LITERAL(85, 1965, 21), // "onWalletAccountRename"
QT_MOC_LITERAL(86, 1987, 22), // "onWalletAccountBalance"
QT_MOC_LITERAL(87, 2010, 25), // "onWalletAccountBalanceIds"
QT_MOC_LITERAL(88, 2036, 27), // "onWalletDelegateWithdrawPay"
QT_MOC_LITERAL(89, 2064, 31), // "onWalletDelegatePayBalanceQuery"
QT_MOC_LITERAL(90, 2096, 25), // "onWalletGetDelegateStatue"
QT_MOC_LITERAL(91, 2122, 21), // "onWalletAccountDelete"
QT_MOC_LITERAL(92, 2144, 25), // "onWalletSetTransactionFee"
QT_MOC_LITERAL(93, 2170, 25), // "onWalletGetTransactionFee"
QT_MOC_LITERAL(94, 2196, 30), // "onWalletSetTransactionScanning"
QT_MOC_LITERAL(95, 2227, 22), // "onWalletDumpPrivateKey"
QT_MOC_LITERAL(96, 2250, 34), // "onWalletDelegateSetBlockProdu..."
QT_MOC_LITERAL(97, 2285, 29), // "onWalletDumpAccountPrivateKey"
QT_MOC_LITERAL(98, 2315, 33), // "onWalletAccountUpdateRegistra..."
QT_MOC_LITERAL(99, 2349, 13), // "onAssetChange"
QT_MOC_LITERAL(100, 2363, 10), // "onFinished"
QT_MOC_LITERAL(101, 2374, 7), // "onError"
QT_MOC_LITERAL(102, 2382, 9), // "errorCode"
QT_MOC_LITERAL(103, 2392, 14) // "fetchAssetInfo"

    },
    "DataMgr\0finished\0\0error\0"
    "QNetworkReply::NetworkError\0onCallContract\0"
    "onCallContractTesting\0onWalletTransferToContract\0"
    "onWalletTransferToContractTesting\0"
    "onGetContractInfo\0onAbout\0onGetInfo\0"
    "assetTypeGet\0onValidateAddress\0"
    "onRpcSetUserName\0onRpcSetPassword\0"
    "onRpcStartServer\0onNtpUpdateTime\0"
    "onDiskUsage\0onNetworkAddNode\0"
    "onNetworkGetInfo\0onNetworkGetConnectionCount\0"
    "onNetworkGetPeerInfo\0onNetworkListPotentialPeers\0"
    "onNetworkGetUpnpInfo\0onExecuteScript\0"
    "onDelegateGetConfig\0"
    "onDelegateSetNetworkMinConnectionCount\0"
    "onDelegateSetBlockMaxTransactionCount\0"
    "onDelegateSetBlockMaxSize\0"
    "onDelegateSetTransactionMaxSize\0"
    "onDelegateSetTransactionMinFee\0onBalance\0"
    "onLock\0onExecuteConsoleCommand\0"
    "onBlockChainGetBlockTransactions\0"
    "onBlockChainGetAccount\0onBlockChainGetInfo\0"
    "onBlockChainGenerateSnapshot\0"
    "onBlockChainIsSynced\0onBlockChainGetBlockCount\0"
    "onBlockChainGetBalance\0"
    "onBlockChainListKeyBalances\0"
    "onBlockChainListActiveDelegates\0"
    "onBlockChainListAccounts\0"
    "onBlockChainListPendingTransactions\0"
    "onBlockChainListAssets\0"
    "onBlockChainGetTransaction\0"
    "onBlockChainListDelegates\0"
    "onBlockChainListBlocks\0"
    "onBlockChainGetBlockSignee\0"
    "onBlockChainGetBlock\0onWalletCreate\0"
    "onWalletGetInfo\0onWalletClose\0"
    "onWalletOpen\0onWalletUnlock\0"
    "onWalletImportPrivateKey\0"
    "onWalletImportRegisterPrivateKey\0"
    "onWalletBackupCreate\0onWalletBackupRestore\0"
    "onWalletSetAutomaticBackups\0"
    "onWalletSetTransactionExpirationTime\0"
    "onWalletAccountTransactionHistory\0"
    "onWalletTransactionHistorySplite\0"
    "onWalletTransactionHistorySpliteWithId\0"
    "onWalletGetPendingTransactionErrors\0"
    "onWalletChangePassphrase\0"
    "onWalletCheckPassphrase\0onWalletCheckAddress\0"
    "onWalletAccountCreate\0onWalletAccountSetApproval\0"
    "onWalletTransferToAddress\0"
    "onWalletTransferToAddressWithId\0"
    "onWalletTransferToPublicAccount\0"
    "onWalletTransferToPublicAccountWithId\0"
    "onWalletRescanBlockchain\0onWalletCancelScan\0"
    "onWalletGetTransaction\0onWalletAccountRegiste\0"
    "onWalletListMyAddresses\0onWalletListAccounts\0"
    "onWalletListUnregisteredAccounts\0"
    "onWalletListMyAccounts\0"
    "onWalletGetAccountPublicAddress\0"
    "onWalletAccountRename\0onWalletAccountBalance\0"
    "onWalletAccountBalanceIds\0"
    "onWalletDelegateWithdrawPay\0"
    "onWalletDelegatePayBalanceQuery\0"
    "onWalletGetDelegateStatue\0"
    "onWalletAccountDelete\0onWalletSetTransactionFee\0"
    "onWalletGetTransactionFee\0"
    "onWalletSetTransactionScanning\0"
    "onWalletDumpPrivateKey\0"
    "onWalletDelegateSetBlockProduction\0"
    "onWalletDumpAccountPrivateKey\0"
    "onWalletAccountUpdateRegistration\0"
    "onAssetChange\0onFinished\0onError\0"
    "errorCode\0fetchAssetInfo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DataMgr[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
     100,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      97,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  514,    2, 0x06 /* Public */,
       3,    1,  515,    2, 0x06 /* Public */,
       5,    1,  518,    2, 0x06 /* Public */,
       6,    1,  521,    2, 0x06 /* Public */,
       7,    1,  524,    2, 0x06 /* Public */,
       8,    1,  527,    2, 0x06 /* Public */,
       9,    1,  530,    2, 0x06 /* Public */,
      10,    1,  533,    2, 0x06 /* Public */,
      11,    1,  536,    2, 0x06 /* Public */,
      12,    0,  539,    2, 0x06 /* Public */,
      13,    1,  540,    2, 0x06 /* Public */,
      14,    1,  543,    2, 0x06 /* Public */,
      15,    1,  546,    2, 0x06 /* Public */,
      16,    1,  549,    2, 0x06 /* Public */,
      17,    1,  552,    2, 0x06 /* Public */,
      18,    1,  555,    2, 0x06 /* Public */,
      19,    1,  558,    2, 0x06 /* Public */,
      20,    1,  561,    2, 0x06 /* Public */,
      21,    1,  564,    2, 0x06 /* Public */,
      22,    1,  567,    2, 0x06 /* Public */,
      23,    1,  570,    2, 0x06 /* Public */,
      24,    1,  573,    2, 0x06 /* Public */,
      25,    1,  576,    2, 0x06 /* Public */,
      26,    1,  579,    2, 0x06 /* Public */,
      27,    1,  582,    2, 0x06 /* Public */,
      28,    1,  585,    2, 0x06 /* Public */,
      29,    1,  588,    2, 0x06 /* Public */,
      30,    1,  591,    2, 0x06 /* Public */,
      31,    1,  594,    2, 0x06 /* Public */,
      32,    1,  597,    2, 0x06 /* Public */,
      33,    1,  600,    2, 0x06 /* Public */,
      34,    1,  603,    2, 0x06 /* Public */,
      35,    1,  606,    2, 0x06 /* Public */,
      36,    1,  609,    2, 0x06 /* Public */,
      37,    1,  612,    2, 0x06 /* Public */,
      38,    1,  615,    2, 0x06 /* Public */,
      39,    1,  618,    2, 0x06 /* Public */,
      40,    1,  621,    2, 0x06 /* Public */,
      41,    1,  624,    2, 0x06 /* Public */,
      42,    1,  627,    2, 0x06 /* Public */,
      43,    1,  630,    2, 0x06 /* Public */,
      44,    1,  633,    2, 0x06 /* Public */,
      45,    1,  636,    2, 0x06 /* Public */,
      46,    1,  639,    2, 0x06 /* Public */,
      47,    1,  642,    2, 0x06 /* Public */,
      48,    1,  645,    2, 0x06 /* Public */,
      49,    1,  648,    2, 0x06 /* Public */,
      50,    1,  651,    2, 0x06 /* Public */,
      51,    1,  654,    2, 0x06 /* Public */,
      52,    1,  657,    2, 0x06 /* Public */,
      53,    1,  660,    2, 0x06 /* Public */,
      54,    1,  663,    2, 0x06 /* Public */,
      55,    1,  666,    2, 0x06 /* Public */,
      56,    1,  669,    2, 0x06 /* Public */,
      57,    1,  672,    2, 0x06 /* Public */,
      58,    1,  675,    2, 0x06 /* Public */,
      59,    1,  678,    2, 0x06 /* Public */,
      60,    1,  681,    2, 0x06 /* Public */,
      61,    1,  684,    2, 0x06 /* Public */,
      62,    1,  687,    2, 0x06 /* Public */,
      63,    1,  690,    2, 0x06 /* Public */,
      64,    1,  693,    2, 0x06 /* Public */,
      65,    2,  696,    2, 0x06 /* Public */,
      66,    1,  701,    2, 0x06 /* Public */,
      67,    1,  704,    2, 0x06 /* Public */,
      68,    1,  707,    2, 0x06 /* Public */,
      69,    1,  710,    2, 0x06 /* Public */,
      70,    1,  713,    2, 0x06 /* Public */,
      71,    1,  716,    2, 0x06 /* Public */,
      72,    1,  719,    2, 0x06 /* Public */,
      73,    2,  722,    2, 0x06 /* Public */,
      74,    1,  727,    2, 0x06 /* Public */,
      75,    2,  730,    2, 0x06 /* Public */,
      76,    1,  735,    2, 0x06 /* Public */,
      77,    1,  738,    2, 0x06 /* Public */,
      78,    1,  741,    2, 0x06 /* Public */,
      79,    1,  744,    2, 0x06 /* Public */,
      80,    1,  747,    2, 0x06 /* Public */,
      81,    1,  750,    2, 0x06 /* Public */,
      82,    1,  753,    2, 0x06 /* Public */,
      83,    1,  756,    2, 0x06 /* Public */,
      84,    1,  759,    2, 0x06 /* Public */,
      85,    1,  762,    2, 0x06 /* Public */,
      86,    1,  765,    2, 0x06 /* Public */,
      87,    1,  768,    2, 0x06 /* Public */,
      88,    1,  771,    2, 0x06 /* Public */,
      89,    1,  774,    2, 0x06 /* Public */,
      90,    1,  777,    2, 0x06 /* Public */,
      91,    1,  780,    2, 0x06 /* Public */,
      92,    1,  783,    2, 0x06 /* Public */,
      93,    1,  786,    2, 0x06 /* Public */,
      94,    1,  789,    2, 0x06 /* Public */,
      95,    1,  792,    2, 0x06 /* Public */,
      96,    1,  795,    2, 0x06 /* Public */,
      97,    1,  798,    2, 0x06 /* Public */,
      98,    1,  801,    2, 0x06 /* Public */,
      99,    0,  804,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
     100,    0,  805,    2, 0x0a /* Public */,
     101,    1,  806,    2, 0x0a /* Public */,
     103,    0,  809,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,  102,
    QMetaType::Void,

       0        // eod
};

void DataMgr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DataMgr *_t = static_cast<DataMgr *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->error((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 2: _t->onCallContract((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->onCallContractTesting((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->onWalletTransferToContract((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->onWalletTransferToContractTesting((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->onGetContractInfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->onAbout((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->onGetInfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->assetTypeGet(); break;
        case 10: _t->onValidateAddress((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->onRpcSetUserName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->onRpcSetPassword((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->onRpcStartServer((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->onNtpUpdateTime((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: _t->onDiskUsage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 16: _t->onNetworkAddNode((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 17: _t->onNetworkGetInfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 18: _t->onNetworkGetConnectionCount((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 19: _t->onNetworkGetPeerInfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 20: _t->onNetworkListPotentialPeers((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 21: _t->onNetworkGetUpnpInfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 22: _t->onExecuteScript((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 23: _t->onDelegateGetConfig((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 24: _t->onDelegateSetNetworkMinConnectionCount((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 25: _t->onDelegateSetBlockMaxTransactionCount((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 26: _t->onDelegateSetBlockMaxSize((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 27: _t->onDelegateSetTransactionMaxSize((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 28: _t->onDelegateSetTransactionMinFee((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 29: _t->onBalance((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 30: _t->onLock((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 31: _t->onExecuteConsoleCommand((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 32: _t->onBlockChainGetBlockTransactions((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 33: _t->onBlockChainGetAccount((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 34: _t->onBlockChainGetInfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 35: _t->onBlockChainGenerateSnapshot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 36: _t->onBlockChainIsSynced((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 37: _t->onBlockChainGetBlockCount((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 38: _t->onBlockChainGetBalance((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 39: _t->onBlockChainListKeyBalances((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 40: _t->onBlockChainListActiveDelegates((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 41: _t->onBlockChainListAccounts((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 42: _t->onBlockChainListPendingTransactions((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 43: _t->onBlockChainListAssets((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 44: _t->onBlockChainGetTransaction((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 45: _t->onBlockChainListDelegates((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 46: _t->onBlockChainListBlocks((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 47: _t->onBlockChainGetBlockSignee((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 48: _t->onBlockChainGetBlock((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 49: _t->onWalletCreate((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 50: _t->onWalletGetInfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 51: _t->onWalletClose((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 52: _t->onWalletOpen((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 53: _t->onWalletUnlock((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 54: _t->onWalletImportPrivateKey((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 55: _t->onWalletImportRegisterPrivateKey((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 56: _t->onWalletBackupCreate((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 57: _t->onWalletBackupRestore((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 58: _t->onWalletSetAutomaticBackups((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 59: _t->onWalletSetTransactionExpirationTime((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 60: _t->onWalletAccountTransactionHistory((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 61: _t->onWalletTransactionHistorySplite((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 62: _t->onWalletTransactionHistorySpliteWithId((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 63: _t->onWalletGetPendingTransactionErrors((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 64: _t->onWalletChangePassphrase((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 65: _t->onWalletCheckPassphrase((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 66: _t->onWalletCheckAddress((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 67: _t->onWalletAccountCreate((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 68: _t->onWalletAccountSetApproval((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 69: _t->onWalletTransferToAddress((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 70: _t->onWalletTransferToAddressWithId((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 71: _t->onWalletTransferToPublicAccount((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 72: _t->onWalletTransferToPublicAccountWithId((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 73: _t->onWalletRescanBlockchain((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 74: _t->onWalletCancelScan((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 75: _t->onWalletGetTransaction((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 76: _t->onWalletAccountRegiste((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 77: _t->onWalletListMyAddresses((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 78: _t->onWalletListAccounts((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 79: _t->onWalletListUnregisteredAccounts((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 80: _t->onWalletListMyAccounts((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 81: _t->onWalletGetAccountPublicAddress((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 82: _t->onWalletAccountRename((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 83: _t->onWalletAccountBalance((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 84: _t->onWalletAccountBalanceIds((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 85: _t->onWalletDelegateWithdrawPay((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 86: _t->onWalletDelegatePayBalanceQuery((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 87: _t->onWalletGetDelegateStatue((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 88: _t->onWalletAccountDelete((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 89: _t->onWalletSetTransactionFee((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 90: _t->onWalletGetTransactionFee((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 91: _t->onWalletSetTransactionScanning((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 92: _t->onWalletDumpPrivateKey((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 93: _t->onWalletDelegateSetBlockProduction((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 94: _t->onWalletDumpAccountPrivateKey((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 95: _t->onWalletAccountUpdateRegistration((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 96: _t->onAssetChange(); break;
        case 97: _t->onFinished(); break;
        case 98: _t->onError((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 99: _t->fetchAssetInfo(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 98:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DataMgr::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::finished)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QNetworkReply::NetworkError );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::error)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onCallContract)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onCallContractTesting)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onWalletTransferToContract)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onWalletTransferToContractTesting)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onGetContractInfo)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onAbout)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onGetInfo)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::assetTypeGet)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onValidateAddress)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onRpcSetUserName)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onRpcSetPassword)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onRpcStartServer)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onNtpUpdateTime)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onDiskUsage)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onNetworkAddNode)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onNetworkGetInfo)) {
                *result = 17;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onNetworkGetConnectionCount)) {
                *result = 18;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onNetworkGetPeerInfo)) {
                *result = 19;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onNetworkListPotentialPeers)) {
                *result = 20;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onNetworkGetUpnpInfo)) {
                *result = 21;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onExecuteScript)) {
                *result = 22;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onDelegateGetConfig)) {
                *result = 23;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onDelegateSetNetworkMinConnectionCount)) {
                *result = 24;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onDelegateSetBlockMaxTransactionCount)) {
                *result = 25;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onDelegateSetBlockMaxSize)) {
                *result = 26;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onDelegateSetTransactionMaxSize)) {
                *result = 27;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onDelegateSetTransactionMinFee)) {
                *result = 28;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onBalance)) {
                *result = 29;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onLock)) {
                *result = 30;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onExecuteConsoleCommand)) {
                *result = 31;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onBlockChainGetBlockTransactions)) {
                *result = 32;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onBlockChainGetAccount)) {
                *result = 33;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onBlockChainGetInfo)) {
                *result = 34;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onBlockChainGenerateSnapshot)) {
                *result = 35;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onBlockChainIsSynced)) {
                *result = 36;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onBlockChainGetBlockCount)) {
                *result = 37;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onBlockChainGetBalance)) {
                *result = 38;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onBlockChainListKeyBalances)) {
                *result = 39;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onBlockChainListActiveDelegates)) {
                *result = 40;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onBlockChainListAccounts)) {
                *result = 41;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onBlockChainListPendingTransactions)) {
                *result = 42;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onBlockChainListAssets)) {
                *result = 43;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onBlockChainGetTransaction)) {
                *result = 44;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onBlockChainListDelegates)) {
                *result = 45;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onBlockChainListBlocks)) {
                *result = 46;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onBlockChainGetBlockSignee)) {
                *result = 47;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onBlockChainGetBlock)) {
                *result = 48;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onWalletCreate)) {
                *result = 49;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onWalletGetInfo)) {
                *result = 50;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onWalletClose)) {
                *result = 51;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onWalletOpen)) {
                *result = 52;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onWalletUnlock)) {
                *result = 53;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onWalletImportPrivateKey)) {
                *result = 54;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onWalletImportRegisterPrivateKey)) {
                *result = 55;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onWalletBackupCreate)) {
                *result = 56;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onWalletBackupRestore)) {
                *result = 57;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onWalletSetAutomaticBackups)) {
                *result = 58;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onWalletSetTransactionExpirationTime)) {
                *result = 59;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onWalletAccountTransactionHistory)) {
                *result = 60;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onWalletTransactionHistorySplite)) {
                *result = 61;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onWalletTransactionHistorySpliteWithId)) {
                *result = 62;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onWalletGetPendingTransactionErrors)) {
                *result = 63;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onWalletChangePassphrase)) {
                *result = 64;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onWalletCheckPassphrase)) {
                *result = 65;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onWalletCheckAddress)) {
                *result = 66;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onWalletAccountCreate)) {
                *result = 67;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onWalletAccountSetApproval)) {
                *result = 68;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onWalletTransferToAddress)) {
                *result = 69;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onWalletTransferToAddressWithId)) {
                *result = 70;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onWalletTransferToPublicAccount)) {
                *result = 71;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onWalletTransferToPublicAccountWithId)) {
                *result = 72;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onWalletRescanBlockchain)) {
                *result = 73;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onWalletCancelScan)) {
                *result = 74;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onWalletGetTransaction)) {
                *result = 75;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onWalletAccountRegiste)) {
                *result = 76;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onWalletListMyAddresses)) {
                *result = 77;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onWalletListAccounts)) {
                *result = 78;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onWalletListUnregisteredAccounts)) {
                *result = 79;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onWalletListMyAccounts)) {
                *result = 80;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onWalletGetAccountPublicAddress)) {
                *result = 81;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onWalletAccountRename)) {
                *result = 82;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onWalletAccountBalance)) {
                *result = 83;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onWalletAccountBalanceIds)) {
                *result = 84;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onWalletDelegateWithdrawPay)) {
                *result = 85;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onWalletDelegatePayBalanceQuery)) {
                *result = 86;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onWalletGetDelegateStatue)) {
                *result = 87;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onWalletAccountDelete)) {
                *result = 88;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onWalletSetTransactionFee)) {
                *result = 89;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onWalletGetTransactionFee)) {
                *result = 90;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onWalletSetTransactionScanning)) {
                *result = 91;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onWalletDumpPrivateKey)) {
                *result = 92;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onWalletDelegateSetBlockProduction)) {
                *result = 93;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onWalletDumpAccountPrivateKey)) {
                *result = 94;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onWalletAccountUpdateRegistration)) {
                *result = 95;
                return;
            }
        }
        {
            typedef void (DataMgr::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataMgr::onAssetChange)) {
                *result = 96;
                return;
            }
        }
    }
}

const QMetaObject DataMgr::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DataMgr.data,
      qt_meta_data_DataMgr,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DataMgr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataMgr::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DataMgr.stringdata0))
        return static_cast<void*>(const_cast< DataMgr*>(this));
    return QObject::qt_metacast(_clname);
}

int DataMgr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 100)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 100;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 100)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 100;
    }
    return _id;
}

// SIGNAL 0
void DataMgr::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void DataMgr::error(QNetworkReply::NetworkError _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DataMgr::onCallContract(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DataMgr::onCallContractTesting(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DataMgr::onWalletTransferToContract(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void DataMgr::onWalletTransferToContractTesting(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void DataMgr::onGetContractInfo(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void DataMgr::onAbout(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void DataMgr::onGetInfo(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void DataMgr::assetTypeGet()
{
    QMetaObject::activate(this, &staticMetaObject, 9, Q_NULLPTR);
}

// SIGNAL 10
void DataMgr::onValidateAddress(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void DataMgr::onRpcSetUserName(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void DataMgr::onRpcSetPassword(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void DataMgr::onRpcStartServer(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void DataMgr::onNtpUpdateTime(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void DataMgr::onDiskUsage(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void DataMgr::onNetworkAddNode(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void DataMgr::onNetworkGetInfo(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void DataMgr::onNetworkGetConnectionCount(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void DataMgr::onNetworkGetPeerInfo(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void DataMgr::onNetworkListPotentialPeers(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void DataMgr::onNetworkGetUpnpInfo(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void DataMgr::onExecuteScript(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void DataMgr::onDelegateGetConfig(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void DataMgr::onDelegateSetNetworkMinConnectionCount(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void DataMgr::onDelegateSetBlockMaxTransactionCount(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void DataMgr::onDelegateSetBlockMaxSize(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void DataMgr::onDelegateSetTransactionMaxSize(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void DataMgr::onDelegateSetTransactionMinFee(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void DataMgr::onBalance(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void DataMgr::onLock(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void DataMgr::onExecuteConsoleCommand(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void DataMgr::onBlockChainGetBlockTransactions(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void DataMgr::onBlockChainGetAccount(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void DataMgr::onBlockChainGetInfo(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void DataMgr::onBlockChainGenerateSnapshot(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void DataMgr::onBlockChainIsSynced(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void DataMgr::onBlockChainGetBlockCount(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void DataMgr::onBlockChainGetBalance(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void DataMgr::onBlockChainListKeyBalances(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void DataMgr::onBlockChainListActiveDelegates(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void DataMgr::onBlockChainListAccounts(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void DataMgr::onBlockChainListPendingTransactions(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void DataMgr::onBlockChainListAssets(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}

// SIGNAL 44
void DataMgr::onBlockChainGetTransaction(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 44, _a);
}

// SIGNAL 45
void DataMgr::onBlockChainListDelegates(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 45, _a);
}

// SIGNAL 46
void DataMgr::onBlockChainListBlocks(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 46, _a);
}

// SIGNAL 47
void DataMgr::onBlockChainGetBlockSignee(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 47, _a);
}

// SIGNAL 48
void DataMgr::onBlockChainGetBlock(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 48, _a);
}

// SIGNAL 49
void DataMgr::onWalletCreate(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 49, _a);
}

// SIGNAL 50
void DataMgr::onWalletGetInfo(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 50, _a);
}

// SIGNAL 51
void DataMgr::onWalletClose(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 51, _a);
}

// SIGNAL 52
void DataMgr::onWalletOpen(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 52, _a);
}

// SIGNAL 53
void DataMgr::onWalletUnlock(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 53, _a);
}

// SIGNAL 54
void DataMgr::onWalletImportPrivateKey(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 54, _a);
}

// SIGNAL 55
void DataMgr::onWalletImportRegisterPrivateKey(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 55, _a);
}

// SIGNAL 56
void DataMgr::onWalletBackupCreate(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 56, _a);
}

// SIGNAL 57
void DataMgr::onWalletBackupRestore(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 57, _a);
}

// SIGNAL 58
void DataMgr::onWalletSetAutomaticBackups(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 58, _a);
}

// SIGNAL 59
void DataMgr::onWalletSetTransactionExpirationTime(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 59, _a);
}

// SIGNAL 60
void DataMgr::onWalletAccountTransactionHistory(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 60, _a);
}

// SIGNAL 61
void DataMgr::onWalletTransactionHistorySplite(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 61, _a);
}

// SIGNAL 62
void DataMgr::onWalletTransactionHistorySpliteWithId(QString _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 62, _a);
}

// SIGNAL 63
void DataMgr::onWalletGetPendingTransactionErrors(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 63, _a);
}

// SIGNAL 64
void DataMgr::onWalletChangePassphrase(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 64, _a);
}

// SIGNAL 65
void DataMgr::onWalletCheckPassphrase(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 65, _a);
}

// SIGNAL 66
void DataMgr::onWalletCheckAddress(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 66, _a);
}

// SIGNAL 67
void DataMgr::onWalletAccountCreate(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 67, _a);
}

// SIGNAL 68
void DataMgr::onWalletAccountSetApproval(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 68, _a);
}

// SIGNAL 69
void DataMgr::onWalletTransferToAddress(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 69, _a);
}

// SIGNAL 70
void DataMgr::onWalletTransferToAddressWithId(QString _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 70, _a);
}

// SIGNAL 71
void DataMgr::onWalletTransferToPublicAccount(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 71, _a);
}

// SIGNAL 72
void DataMgr::onWalletTransferToPublicAccountWithId(QString _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 72, _a);
}

// SIGNAL 73
void DataMgr::onWalletRescanBlockchain(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 73, _a);
}

// SIGNAL 74
void DataMgr::onWalletCancelScan(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 74, _a);
}

// SIGNAL 75
void DataMgr::onWalletGetTransaction(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 75, _a);
}

// SIGNAL 76
void DataMgr::onWalletAccountRegiste(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 76, _a);
}

// SIGNAL 77
void DataMgr::onWalletListMyAddresses(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 77, _a);
}

// SIGNAL 78
void DataMgr::onWalletListAccounts(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 78, _a);
}

// SIGNAL 79
void DataMgr::onWalletListUnregisteredAccounts(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 79, _a);
}

// SIGNAL 80
void DataMgr::onWalletListMyAccounts(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 80, _a);
}

// SIGNAL 81
void DataMgr::onWalletGetAccountPublicAddress(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 81, _a);
}

// SIGNAL 82
void DataMgr::onWalletAccountRename(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 82, _a);
}

// SIGNAL 83
void DataMgr::onWalletAccountBalance(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 83, _a);
}

// SIGNAL 84
void DataMgr::onWalletAccountBalanceIds(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 84, _a);
}

// SIGNAL 85
void DataMgr::onWalletDelegateWithdrawPay(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 85, _a);
}

// SIGNAL 86
void DataMgr::onWalletDelegatePayBalanceQuery(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 86, _a);
}

// SIGNAL 87
void DataMgr::onWalletGetDelegateStatue(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 87, _a);
}

// SIGNAL 88
void DataMgr::onWalletAccountDelete(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 88, _a);
}

// SIGNAL 89
void DataMgr::onWalletSetTransactionFee(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 89, _a);
}

// SIGNAL 90
void DataMgr::onWalletGetTransactionFee(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 90, _a);
}

// SIGNAL 91
void DataMgr::onWalletSetTransactionScanning(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 91, _a);
}

// SIGNAL 92
void DataMgr::onWalletDumpPrivateKey(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 92, _a);
}

// SIGNAL 93
void DataMgr::onWalletDelegateSetBlockProduction(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 93, _a);
}

// SIGNAL 94
void DataMgr::onWalletDumpAccountPrivateKey(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 94, _a);
}

// SIGNAL 95
void DataMgr::onWalletAccountUpdateRegistration(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 95, _a);
}

// SIGNAL 96
void DataMgr::onAssetChange()
{
    QMetaObject::activate(this, &staticMetaObject, 96, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
