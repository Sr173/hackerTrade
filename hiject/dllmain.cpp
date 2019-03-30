


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 头文件
#include <Windows.h>
#include "hook.h"
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
#pragma comment(linker, "/EXPORT:AddIPAddress=_AheadLib_AddIPAddress,@1")
#pragma comment(linker, "/EXPORT:AllocateAndGetInterfaceInfoFromStack=_AheadLib_AllocateAndGetInterfaceInfoFromStack,@2")
#pragma comment(linker, "/EXPORT:AllocateAndGetIpAddrTableFromStack=_AheadLib_AllocateAndGetIpAddrTableFromStack,@3")
#pragma comment(linker, "/EXPORT:CancelIPChangeNotify=_AheadLib_CancelIPChangeNotify,@4")
#pragma comment(linker, "/EXPORT:CancelMibChangeNotify2=_AheadLib_CancelMibChangeNotify2,@5")
#pragma comment(linker, "/EXPORT:CloseCompartment=_AheadLib_CloseCompartment,@6")
#pragma comment(linker, "/EXPORT:CloseGetIPPhysicalInterfaceForDestination=_AheadLib_CloseGetIPPhysicalInterfaceForDestination,@7")
#pragma comment(linker, "/EXPORT:ConvertCompartmentGuidToId=_AheadLib_ConvertCompartmentGuidToId,@8")
#pragma comment(linker, "/EXPORT:ConvertCompartmentIdToGuid=_AheadLib_ConvertCompartmentIdToGuid,@9")
#pragma comment(linker, "/EXPORT:ConvertGuidToStringA=_AheadLib_ConvertGuidToStringA,@10")
#pragma comment(linker, "/EXPORT:ConvertGuidToStringW=_AheadLib_ConvertGuidToStringW,@11")
#pragma comment(linker, "/EXPORT:ConvertInterfaceAliasToLuid=_AheadLib_ConvertInterfaceAliasToLuid,@12")
#pragma comment(linker, "/EXPORT:ConvertInterfaceGuidToLuid=_AheadLib_ConvertInterfaceGuidToLuid,@13")
#pragma comment(linker, "/EXPORT:ConvertInterfaceIndexToLuid=_AheadLib_ConvertInterfaceIndexToLuid,@14")
#pragma comment(linker, "/EXPORT:ConvertInterfaceLuidToAlias=_AheadLib_ConvertInterfaceLuidToAlias,@15")
#pragma comment(linker, "/EXPORT:ConvertInterfaceLuidToGuid=_AheadLib_ConvertInterfaceLuidToGuid,@16")
#pragma comment(linker, "/EXPORT:ConvertInterfaceLuidToIndex=_AheadLib_ConvertInterfaceLuidToIndex,@17")
#pragma comment(linker, "/EXPORT:ConvertInterfaceLuidToNameA=_AheadLib_ConvertInterfaceLuidToNameA,@18")
#pragma comment(linker, "/EXPORT:ConvertInterfaceLuidToNameW=_AheadLib_ConvertInterfaceLuidToNameW,@19")
#pragma comment(linker, "/EXPORT:ConvertInterfaceNameToLuidA=_AheadLib_ConvertInterfaceNameToLuidA,@20")
#pragma comment(linker, "/EXPORT:ConvertInterfaceNameToLuidW=_AheadLib_ConvertInterfaceNameToLuidW,@21")
#pragma comment(linker, "/EXPORT:ConvertInterfacePhysicalAddressToLuid=_AheadLib_ConvertInterfacePhysicalAddressToLuid,@22")
#pragma comment(linker, "/EXPORT:ConvertIpv4MaskToLength=_AheadLib_ConvertIpv4MaskToLength,@23")
#pragma comment(linker, "/EXPORT:ConvertLengthToIpv4Mask=_AheadLib_ConvertLengthToIpv4Mask,@24")
#pragma comment(linker, "/EXPORT:ConvertRemoteInterfaceAliasToLuid=_AheadLib_ConvertRemoteInterfaceAliasToLuid,@25")
#pragma comment(linker, "/EXPORT:ConvertRemoteInterfaceGuidToLuid=_AheadLib_ConvertRemoteInterfaceGuidToLuid,@26")
#pragma comment(linker, "/EXPORT:ConvertRemoteInterfaceIndexToLuid=_AheadLib_ConvertRemoteInterfaceIndexToLuid,@27")
#pragma comment(linker, "/EXPORT:ConvertRemoteInterfaceLuidToAlias=_AheadLib_ConvertRemoteInterfaceLuidToAlias,@28")
#pragma comment(linker, "/EXPORT:ConvertRemoteInterfaceLuidToGuid=_AheadLib_ConvertRemoteInterfaceLuidToGuid,@29")
#pragma comment(linker, "/EXPORT:ConvertRemoteInterfaceLuidToIndex=_AheadLib_ConvertRemoteInterfaceLuidToIndex,@30")
#pragma comment(linker, "/EXPORT:ConvertStringToGuidA=_AheadLib_ConvertStringToGuidA,@31")
#pragma comment(linker, "/EXPORT:ConvertStringToGuidW=_AheadLib_ConvertStringToGuidW,@32")
#pragma comment(linker, "/EXPORT:ConvertStringToInterfacePhysicalAddress=_AheadLib_ConvertStringToInterfacePhysicalAddress,@33")
#pragma comment(linker, "/EXPORT:CreateAnycastIpAddressEntry=_AheadLib_CreateAnycastIpAddressEntry,@34")
#pragma comment(linker, "/EXPORT:CreateCompartment=_AheadLib_CreateCompartment,@35")
#pragma comment(linker, "/EXPORT:CreateIpForwardEntry2=_AheadLib_CreateIpForwardEntry2,@36")
#pragma comment(linker, "/EXPORT:CreateIpForwardEntry=_AheadLib_CreateIpForwardEntry,@37")
#pragma comment(linker, "/EXPORT:CreateIpNetEntry2=_AheadLib_CreateIpNetEntry2,@38")
#pragma comment(linker, "/EXPORT:CreateIpNetEntry=_AheadLib_CreateIpNetEntry,@39")
#pragma comment(linker, "/EXPORT:CreatePersistentTcpPortReservation=_AheadLib_CreatePersistentTcpPortReservation,@40")
#pragma comment(linker, "/EXPORT:CreatePersistentUdpPortReservation=_AheadLib_CreatePersistentUdpPortReservation,@41")
#pragma comment(linker, "/EXPORT:CreateProxyArpEntry=_AheadLib_CreateProxyArpEntry,@42")
#pragma comment(linker, "/EXPORT:CreateSortedAddressPairs=_AheadLib_CreateSortedAddressPairs,@43")
#pragma comment(linker, "/EXPORT:CreateUnicastIpAddressEntry=_AheadLib_CreateUnicastIpAddressEntry,@44")
#pragma comment(linker, "/EXPORT:DeleteAnycastIpAddressEntry=_AheadLib_DeleteAnycastIpAddressEntry,@45")
#pragma comment(linker, "/EXPORT:DeleteCompartment=_AheadLib_DeleteCompartment,@46")
#pragma comment(linker, "/EXPORT:DeleteIPAddress=_AheadLib_DeleteIPAddress,@47")
#pragma comment(linker, "/EXPORT:DeleteIpForwardEntry2=_AheadLib_DeleteIpForwardEntry2,@48")
#pragma comment(linker, "/EXPORT:DeleteIpForwardEntry=_AheadLib_DeleteIpForwardEntry,@49")
#pragma comment(linker, "/EXPORT:DeleteIpNetEntry2=_AheadLib_DeleteIpNetEntry2,@50")
#pragma comment(linker, "/EXPORT:DeleteIpNetEntry=_AheadLib_DeleteIpNetEntry,@51")
#pragma comment(linker, "/EXPORT:DeletePersistentTcpPortReservation=_AheadLib_DeletePersistentTcpPortReservation,@52")
#pragma comment(linker, "/EXPORT:DeletePersistentUdpPortReservation=_AheadLib_DeletePersistentUdpPortReservation,@53")
#pragma comment(linker, "/EXPORT:DeleteProxyArpEntry=_AheadLib_DeleteProxyArpEntry,@54")
#pragma comment(linker, "/EXPORT:DeleteUnicastIpAddressEntry=_AheadLib_DeleteUnicastIpAddressEntry,@55")
#pragma comment(linker, "/EXPORT:DisableMediaSense=_AheadLib_DisableMediaSense,@56")
#pragma comment(linker, "/EXPORT:EnableRouter=_AheadLib_EnableRouter,@57")
#pragma comment(linker, "/EXPORT:FlushIpNetTable2=_AheadLib_FlushIpNetTable2,@58")
#pragma comment(linker, "/EXPORT:FlushIpNetTable=_AheadLib_FlushIpNetTable,@59")
#pragma comment(linker, "/EXPORT:FlushIpPathTable=_AheadLib_FlushIpPathTable,@60")
#pragma comment(linker, "/EXPORT:FreeMibTable=_AheadLib_FreeMibTable,@61")
#pragma comment(linker, "/EXPORT:GetAdapterIndex=_AheadLib_GetAdapterIndex,@62")
#pragma comment(linker, "/EXPORT:GetAdapterOrderMap=_AheadLib_GetAdapterOrderMap,@63")
#pragma comment(linker, "/EXPORT:GetAdaptersAddresses=_AheadLib_GetAdaptersAddresses,@64")
#pragma comment(linker, "/EXPORT:GetAdaptersInfo=_AheadLib_GetAdaptersInfo,@65")
#pragma comment(linker, "/EXPORT:GetAnycastIpAddressEntry=_AheadLib_GetAnycastIpAddressEntry,@66")
#pragma comment(linker, "/EXPORT:GetAnycastIpAddressTable=_AheadLib_GetAnycastIpAddressTable,@67")
#pragma comment(linker, "/EXPORT:GetBestInterface=_AheadLib_GetBestInterface,@68")
#pragma comment(linker, "/EXPORT:GetBestInterfaceEx=_AheadLib_GetBestInterfaceEx,@69")
#pragma comment(linker, "/EXPORT:GetBestRoute2=_AheadLib_GetBestRoute2,@70")
#pragma comment(linker, "/EXPORT:GetBestRoute=_AheadLib_GetBestRoute,@71")
#pragma comment(linker, "/EXPORT:GetCurrentThreadCompartmentId=_AheadLib_GetCurrentThreadCompartmentId,@72")
#pragma comment(linker, "/EXPORT:GetCurrentThreadCompartmentScope=_AheadLib_GetCurrentThreadCompartmentScope,@73")
#pragma comment(linker, "/EXPORT:GetDefaultCompartmentId=_AheadLib_GetDefaultCompartmentId,@74")
#pragma comment(linker, "/EXPORT:GetExtendedTcpTable=_AheadLib_GetExtendedTcpTable,@75")
#pragma comment(linker, "/EXPORT:GetExtendedUdpTable=_AheadLib_GetExtendedUdpTable,@76")
#pragma comment(linker, "/EXPORT:GetFriendlyIfIndex=_AheadLib_GetFriendlyIfIndex,@77")
#pragma comment(linker, "/EXPORT:GetIcmpStatistics=_AheadLib_GetIcmpStatistics,@78")
#pragma comment(linker, "/EXPORT:GetIcmpStatisticsEx=_AheadLib_GetIcmpStatisticsEx,@79")
#pragma comment(linker, "/EXPORT:GetIfEntry2=_AheadLib_GetIfEntry2,@80")
#pragma comment(linker, "/EXPORT:GetIfEntry2Ex=_AheadLib_GetIfEntry2Ex,@81")
#pragma comment(linker, "/EXPORT:GetIfEntry=_AheadLib_GetIfEntry,@82")
#pragma comment(linker, "/EXPORT:GetIfStackTable=_AheadLib_GetIfStackTable,@83")
#pragma comment(linker, "/EXPORT:GetIfTable2=_AheadLib_GetIfTable2,@84")
#pragma comment(linker, "/EXPORT:GetIfTable2Ex=_AheadLib_GetIfTable2Ex,@85")
#pragma comment(linker, "/EXPORT:GetIfTable=_AheadLib_GetIfTable,@86")
#pragma comment(linker, "/EXPORT:GetInterfaceCompartmentId=_AheadLib_GetInterfaceCompartmentId,@87")
#pragma comment(linker, "/EXPORT:GetInterfaceInfo=_AheadLib_GetInterfaceInfo,@88")
#pragma comment(linker, "/EXPORT:GetInvertedIfStackTable=_AheadLib_GetInvertedIfStackTable,@89")
#pragma comment(linker, "/EXPORT:GetIpAddrTable=_AheadLib_GetIpAddrTable,@90")
#pragma comment(linker, "/EXPORT:GetIpErrorString=_AheadLib_GetIpErrorString,@91")
#pragma comment(linker, "/EXPORT:GetIpForwardEntry2=_AheadLib_GetIpForwardEntry2,@92")
#pragma comment(linker, "/EXPORT:GetIpForwardTable2=_AheadLib_GetIpForwardTable2,@93")
#pragma comment(linker, "/EXPORT:GetIpForwardTable=_AheadLib_GetIpForwardTable,@94")
#pragma comment(linker, "/EXPORT:GetIpInterfaceEntry=_AheadLib_GetIpInterfaceEntry,@95")
#pragma comment(linker, "/EXPORT:GetIpInterfaceTable=_AheadLib_GetIpInterfaceTable,@96")
#pragma comment(linker, "/EXPORT:GetIpNetEntry2=_AheadLib_GetIpNetEntry2,@97")
#pragma comment(linker, "/EXPORT:GetIpNetTable2=_AheadLib_GetIpNetTable2,@98")
#pragma comment(linker, "/EXPORT:GetIpNetTable=_AheadLib_GetIpNetTable,@99")
#pragma comment(linker, "/EXPORT:GetIpNetworkConnectionBandwidthEstimates=_AheadLib_GetIpNetworkConnectionBandwidthEstimates,@100")
#pragma comment(linker, "/EXPORT:GetIpPathEntry=_AheadLib_GetIpPathEntry,@101")
#pragma comment(linker, "/EXPORT:GetIpPathTable=_AheadLib_GetIpPathTable,@102")
#pragma comment(linker, "/EXPORT:GetIpStatistics=_AheadLib_GetIpStatistics,@103")
#pragma comment(linker, "/EXPORT:GetIpStatisticsEx=_AheadLib_GetIpStatisticsEx,@104")
#pragma comment(linker, "/EXPORT:GetJobCompartmentId=_AheadLib_GetJobCompartmentId,@105")
#pragma comment(linker, "/EXPORT:GetMulticastIpAddressEntry=_AheadLib_GetMulticastIpAddressEntry,@106")
#pragma comment(linker, "/EXPORT:GetMulticastIpAddressTable=_AheadLib_GetMulticastIpAddressTable,@107")
#pragma comment(linker, "/EXPORT:GetNetworkInformation=_AheadLib_GetNetworkInformation,@108")
#pragma comment(linker, "/EXPORT:GetNetworkParams=_AheadLib_GetNetworkParams,@109")
#pragma comment(linker, "/EXPORT:GetNumberOfInterfaces=_AheadLib_GetNumberOfInterfaces,@110")
#pragma comment(linker, "/EXPORT:GetOwnerModuleFromPidAndInfo=_AheadLib_GetOwnerModuleFromPidAndInfo,@111")
#pragma comment(linker, "/EXPORT:GetOwnerModuleFromTcp6Entry=_AheadLib_GetOwnerModuleFromTcp6Entry,@112")
#pragma comment(linker, "/EXPORT:GetOwnerModuleFromTcpEntry=_AheadLib_GetOwnerModuleFromTcpEntry,@113")
#pragma comment(linker, "/EXPORT:GetOwnerModuleFromUdp6Entry=_AheadLib_GetOwnerModuleFromUdp6Entry,@114")
#pragma comment(linker, "/EXPORT:GetOwnerModuleFromUdpEntry=_AheadLib_GetOwnerModuleFromUdpEntry,@115")
#pragma comment(linker, "/EXPORT:GetPerAdapterInfo=_AheadLib_GetPerAdapterInfo,@116")
#pragma comment(linker, "/EXPORT:GetPerTcp6ConnectionEStats=_AheadLib_GetPerTcp6ConnectionEStats,@117")
#pragma comment(linker, "/EXPORT:GetPerTcp6ConnectionStats=_AheadLib_GetPerTcp6ConnectionStats,@118")
#pragma comment(linker, "/EXPORT:GetPerTcpConnectionEStats=_AheadLib_GetPerTcpConnectionEStats,@119")
#pragma comment(linker, "/EXPORT:GetPerTcpConnectionStats=_AheadLib_GetPerTcpConnectionStats,@120")
#pragma comment(linker, "/EXPORT:GetRTTAndHopCount=_AheadLib_GetRTTAndHopCount,@121")
#pragma comment(linker, "/EXPORT:GetSessionCompartmentId=_AheadLib_GetSessionCompartmentId,@122")
#pragma comment(linker, "/EXPORT:GetTcp6Table2=_AheadLib_GetTcp6Table2,@123")
#pragma comment(linker, "/EXPORT:GetTcp6Table=_AheadLib_GetTcp6Table,@124")
#pragma comment(linker, "/EXPORT:GetTcpStatistics=_AheadLib_GetTcpStatistics,@125")
#pragma comment(linker, "/EXPORT:GetTcpStatisticsEx2=_AheadLib_GetTcpStatisticsEx2,@126")
#pragma comment(linker, "/EXPORT:GetTcpStatisticsEx=_AheadLib_GetTcpStatisticsEx,@127")
#pragma comment(linker, "/EXPORT:GetTcpTable2=_AheadLib_GetTcpTable2,@128")
#pragma comment(linker, "/EXPORT:GetTcpTable=_AheadLib_GetTcpTable,@129")
#pragma comment(linker, "/EXPORT:GetTeredoPort=_AheadLib_GetTeredoPort,@130")
#pragma comment(linker, "/EXPORT:GetUdp6Table=_AheadLib_GetUdp6Table,@131")
#pragma comment(linker, "/EXPORT:GetUdpStatistics=_AheadLib_GetUdpStatistics,@132")
#pragma comment(linker, "/EXPORT:GetUdpStatisticsEx2=_AheadLib_GetUdpStatisticsEx2,@133")
#pragma comment(linker, "/EXPORT:GetUdpStatisticsEx=_AheadLib_GetUdpStatisticsEx,@134")
#pragma comment(linker, "/EXPORT:GetUdpTable=_AheadLib_GetUdpTable,@135")
#pragma comment(linker, "/EXPORT:GetUniDirectionalAdapterInfo=_AheadLib_GetUniDirectionalAdapterInfo,@136")
#pragma comment(linker, "/EXPORT:GetUnicastIpAddressEntry=_AheadLib_GetUnicastIpAddressEntry,@137")
#pragma comment(linker, "/EXPORT:GetUnicastIpAddressTable=_AheadLib_GetUnicastIpAddressTable,@138")
#pragma comment(linker, "/EXPORT:GetWPAOACSupportLevel=_AheadLib_GetWPAOACSupportLevel,@139")
#pragma comment(linker, "/EXPORT:Icmp6CreateFile=_AheadLib_Icmp6CreateFile,@140")
#pragma comment(linker, "/EXPORT:Icmp6ParseReplies=_AheadLib_Icmp6ParseReplies,@141")
#pragma comment(linker, "/EXPORT:Icmp6SendEcho2=_AheadLib_Icmp6SendEcho2,@142")
#pragma comment(linker, "/EXPORT:IcmpCloseHandle=_AheadLib_IcmpCloseHandle,@143")
#pragma comment(linker, "/EXPORT:IcmpCreateFile=_AheadLib_IcmpCreateFile,@144")
#pragma comment(linker, "/EXPORT:IcmpParseReplies=_AheadLib_IcmpParseReplies,@145")
#pragma comment(linker, "/EXPORT:IcmpSendEcho2=_AheadLib_IcmpSendEcho2,@146")
#pragma comment(linker, "/EXPORT:IcmpSendEcho2Ex=_AheadLib_IcmpSendEcho2Ex,@147")
#pragma comment(linker, "/EXPORT:IcmpSendEcho=_AheadLib_IcmpSendEcho,@148")
#pragma comment(linker, "/EXPORT:InitializeCompartmentEntry=_AheadLib_InitializeCompartmentEntry,@149")
#pragma comment(linker, "/EXPORT:InitializeIpForwardEntry=_AheadLib_InitializeIpForwardEntry,@150")
#pragma comment(linker, "/EXPORT:InitializeIpInterfaceEntry=_AheadLib_InitializeIpInterfaceEntry,@151")
#pragma comment(linker, "/EXPORT:InitializeUnicastIpAddressEntry=_AheadLib_InitializeUnicastIpAddressEntry,@152")
#pragma comment(linker, "/EXPORT:InternalCleanupPersistentStore=_AheadLib_InternalCleanupPersistentStore,@153")
#pragma comment(linker, "/EXPORT:InternalCreateAnycastIpAddressEntry=_AheadLib_InternalCreateAnycastIpAddressEntry,@154")
#pragma comment(linker, "/EXPORT:InternalCreateIpForwardEntry2=_AheadLib_InternalCreateIpForwardEntry2,@155")
#pragma comment(linker, "/EXPORT:InternalCreateIpForwardEntry=_AheadLib_InternalCreateIpForwardEntry,@156")
#pragma comment(linker, "/EXPORT:InternalCreateIpNetEntry2=_AheadLib_InternalCreateIpNetEntry2,@157")
#pragma comment(linker, "/EXPORT:InternalCreateIpNetEntry=_AheadLib_InternalCreateIpNetEntry,@158")
#pragma comment(linker, "/EXPORT:InternalCreateUnicastIpAddressEntry=_AheadLib_InternalCreateUnicastIpAddressEntry,@159")
#pragma comment(linker, "/EXPORT:InternalDeleteAnycastIpAddressEntry=_AheadLib_InternalDeleteAnycastIpAddressEntry,@160")
#pragma comment(linker, "/EXPORT:InternalDeleteIpForwardEntry2=_AheadLib_InternalDeleteIpForwardEntry2,@161")
#pragma comment(linker, "/EXPORT:InternalDeleteIpForwardEntry=_AheadLib_InternalDeleteIpForwardEntry,@162")
#pragma comment(linker, "/EXPORT:InternalDeleteIpNetEntry2=_AheadLib_InternalDeleteIpNetEntry2,@163")
#pragma comment(linker, "/EXPORT:InternalDeleteIpNetEntry=_AheadLib_InternalDeleteIpNetEntry,@164")
#pragma comment(linker, "/EXPORT:InternalDeleteUnicastIpAddressEntry=_AheadLib_InternalDeleteUnicastIpAddressEntry,@165")
#pragma comment(linker, "/EXPORT:InternalFindInterfaceByAddress=_AheadLib_InternalFindInterfaceByAddress,@166")
#pragma comment(linker, "/EXPORT:InternalGetAnycastIpAddressEntry=_AheadLib_InternalGetAnycastIpAddressEntry,@167")
#pragma comment(linker, "/EXPORT:InternalGetAnycastIpAddressTable=_AheadLib_InternalGetAnycastIpAddressTable,@168")
#pragma comment(linker, "/EXPORT:InternalGetBoundTcp6EndpointTable=_AheadLib_InternalGetBoundTcp6EndpointTable,@169")
#pragma comment(linker, "/EXPORT:InternalGetBoundTcpEndpointTable=_AheadLib_InternalGetBoundTcpEndpointTable,@170")
#pragma comment(linker, "/EXPORT:InternalGetForwardIpTable2=_AheadLib_InternalGetForwardIpTable2,@171")
#pragma comment(linker, "/EXPORT:InternalGetIPPhysicalInterfaceForDestination=_AheadLib_InternalGetIPPhysicalInterfaceForDestination,@172")
#pragma comment(linker, "/EXPORT:InternalGetIfEntry2=_AheadLib_InternalGetIfEntry2,@173")
#pragma comment(linker, "/EXPORT:InternalGetIfTable2=_AheadLib_InternalGetIfTable2,@174")
#pragma comment(linker, "/EXPORT:InternalGetIfTable=_AheadLib_InternalGetIfTable,@175")
#pragma comment(linker, "/EXPORT:InternalGetIpAddrTable=_AheadLib_InternalGetIpAddrTable,@176")
#pragma comment(linker, "/EXPORT:InternalGetIpForwardEntry2=_AheadLib_InternalGetIpForwardEntry2,@177")
#pragma comment(linker, "/EXPORT:InternalGetIpForwardTable=_AheadLib_InternalGetIpForwardTable,@178")
#pragma comment(linker, "/EXPORT:InternalGetIpInterfaceEntry=_AheadLib_InternalGetIpInterfaceEntry,@179")
#pragma comment(linker, "/EXPORT:InternalGetIpInterfaceTable=_AheadLib_InternalGetIpInterfaceTable,@180")
#pragma comment(linker, "/EXPORT:InternalGetIpNetEntry2=_AheadLib_InternalGetIpNetEntry2,@181")
#pragma comment(linker, "/EXPORT:InternalGetIpNetTable2=_AheadLib_InternalGetIpNetTable2,@182")
#pragma comment(linker, "/EXPORT:InternalGetIpNetTable=_AheadLib_InternalGetIpNetTable,@183")
#pragma comment(linker, "/EXPORT:InternalGetMulticastIpAddressEntry=_AheadLib_InternalGetMulticastIpAddressEntry,@184")
#pragma comment(linker, "/EXPORT:InternalGetMulticastIpAddressTable=_AheadLib_InternalGetMulticastIpAddressTable,@185")
#pragma comment(linker, "/EXPORT:InternalGetRtcSlotInformation=_AheadLib_InternalGetRtcSlotInformation,@186")
#pragma comment(linker, "/EXPORT:InternalGetTcp6Table2=_AheadLib_InternalGetTcp6Table2,@187")
#pragma comment(linker, "/EXPORT:InternalGetTcp6TableWithOwnerModule=_AheadLib_InternalGetTcp6TableWithOwnerModule,@188")
#pragma comment(linker, "/EXPORT:InternalGetTcp6TableWithOwnerPid=_AheadLib_InternalGetTcp6TableWithOwnerPid,@189")
#pragma comment(linker, "/EXPORT:InternalGetTcpTable2=_AheadLib_InternalGetTcpTable2,@190")
#pragma comment(linker, "/EXPORT:InternalGetTcpTable=_AheadLib_InternalGetTcpTable,@191")
#pragma comment(linker, "/EXPORT:InternalGetTcpTableEx=_AheadLib_InternalGetTcpTableEx,@192")
#pragma comment(linker, "/EXPORT:InternalGetTcpTableWithOwnerModule=_AheadLib_InternalGetTcpTableWithOwnerModule,@193")
#pragma comment(linker, "/EXPORT:InternalGetTcpTableWithOwnerPid=_AheadLib_InternalGetTcpTableWithOwnerPid,@194")
#pragma comment(linker, "/EXPORT:InternalGetTunnelPhysicalAdapter=_AheadLib_InternalGetTunnelPhysicalAdapter,@195")
#pragma comment(linker, "/EXPORT:InternalGetUdp6TableWithOwnerModule=_AheadLib_InternalGetUdp6TableWithOwnerModule,@196")
#pragma comment(linker, "/EXPORT:InternalGetUdp6TableWithOwnerPid=_AheadLib_InternalGetUdp6TableWithOwnerPid,@197")
#pragma comment(linker, "/EXPORT:InternalGetUdpTable=_AheadLib_InternalGetUdpTable,@198")
#pragma comment(linker, "/EXPORT:InternalGetUdpTableEx=_AheadLib_InternalGetUdpTableEx,@199")
#pragma comment(linker, "/EXPORT:InternalGetUdpTableWithOwnerModule=_AheadLib_InternalGetUdpTableWithOwnerModule,@200")
#pragma comment(linker, "/EXPORT:InternalGetUdpTableWithOwnerPid=_AheadLib_InternalGetUdpTableWithOwnerPid,@201")
#pragma comment(linker, "/EXPORT:InternalGetUnicastIpAddressEntry=_AheadLib_InternalGetUnicastIpAddressEntry,@202")
#pragma comment(linker, "/EXPORT:InternalGetUnicastIpAddressTable=_AheadLib_InternalGetUnicastIpAddressTable,@203")
#pragma comment(linker, "/EXPORT:InternalIcmpCreateFileEx=_AheadLib_InternalIcmpCreateFileEx,@204")
#pragma comment(linker, "/EXPORT:InternalSetIfEntry=_AheadLib_InternalSetIfEntry,@205")
#pragma comment(linker, "/EXPORT:InternalSetIpForwardEntry2=_AheadLib_InternalSetIpForwardEntry2,@206")
#pragma comment(linker, "/EXPORT:InternalSetIpForwardEntry=_AheadLib_InternalSetIpForwardEntry,@207")
#pragma comment(linker, "/EXPORT:InternalSetIpInterfaceEntry=_AheadLib_InternalSetIpInterfaceEntry,@208")
#pragma comment(linker, "/EXPORT:InternalSetIpNetEntry2=_AheadLib_InternalSetIpNetEntry2,@209")
#pragma comment(linker, "/EXPORT:InternalSetIpNetEntry=_AheadLib_InternalSetIpNetEntry,@210")
#pragma comment(linker, "/EXPORT:InternalSetIpStats=_AheadLib_InternalSetIpStats,@211")
#pragma comment(linker, "/EXPORT:InternalSetTcpEntry=_AheadLib_InternalSetTcpEntry,@212")
#pragma comment(linker, "/EXPORT:InternalSetTeredoPort=_AheadLib_InternalSetTeredoPort,@213")
#pragma comment(linker, "/EXPORT:InternalSetUnicastIpAddressEntry=_AheadLib_InternalSetUnicastIpAddressEntry,@214")
#pragma comment(linker, "/EXPORT:IpReleaseAddress=_AheadLib_IpReleaseAddress,@215")
#pragma comment(linker, "/EXPORT:IpRenewAddress=_AheadLib_IpRenewAddress,@216")
#pragma comment(linker, "/EXPORT:LookupPersistentTcpPortReservation=_AheadLib_LookupPersistentTcpPortReservation,@217")
#pragma comment(linker, "/EXPORT:LookupPersistentUdpPortReservation=_AheadLib_LookupPersistentUdpPortReservation,@218")
#pragma comment(linker, "/EXPORT:NTPTimeToNTFileTime=_AheadLib_NTPTimeToNTFileTime,@219")
#pragma comment(linker, "/EXPORT:NTTimeToNTPTime=_AheadLib_NTTimeToNTPTime,@220")
#pragma comment(linker, "/EXPORT:NhGetGuidFromInterfaceName=_AheadLib_NhGetGuidFromInterfaceName,@221")
#pragma comment(linker, "/EXPORT:NhGetInterfaceDescriptionFromGuid=_AheadLib_NhGetInterfaceDescriptionFromGuid,@222")
#pragma comment(linker, "/EXPORT:NhGetInterfaceNameFromDeviceGuid=_AheadLib_NhGetInterfaceNameFromDeviceGuid,@223")
#pragma comment(linker, "/EXPORT:NhGetInterfaceNameFromGuid=_AheadLib_NhGetInterfaceNameFromGuid,@224")
#pragma comment(linker, "/EXPORT:NhpAllocateAndGetInterfaceInfoFromStack=_AheadLib_NhpAllocateAndGetInterfaceInfoFromStack,@225")
#pragma comment(linker, "/EXPORT:NotifyAddrChange=_AheadLib_NotifyAddrChange,@226")
#pragma comment(linker, "/EXPORT:NotifyCompartmentChange=_AheadLib_NotifyCompartmentChange,@227")
#pragma comment(linker, "/EXPORT:NotifyIpInterfaceChange=_AheadLib_NotifyIpInterfaceChange,@228")
#pragma comment(linker, "/EXPORT:NotifyRouteChange2=_AheadLib_NotifyRouteChange2,@229")
#pragma comment(linker, "/EXPORT:NotifyRouteChange=_AheadLib_NotifyRouteChange,@230")
#pragma comment(linker, "/EXPORT:NotifyStableUnicastIpAddressTable=_AheadLib_NotifyStableUnicastIpAddressTable,@231")
#pragma comment(linker, "/EXPORT:NotifyTeredoPortChange=_AheadLib_NotifyTeredoPortChange,@232")
#pragma comment(linker, "/EXPORT:NotifyUnicastIpAddressChange=_AheadLib_NotifyUnicastIpAddressChange,@233")
#pragma comment(linker, "/EXPORT:OpenCompartment=_AheadLib_OpenCompartment,@234")
#pragma comment(linker, "/EXPORT:ParseNetworkString=_AheadLib_ParseNetworkString,@235")
#pragma comment(linker, "/EXPORT:ResolveIpNetEntry2=_AheadLib_ResolveIpNetEntry2,@252")
#pragma comment(linker, "/EXPORT:ResolveNeighbor=_AheadLib_ResolveNeighbor,@253")
#pragma comment(linker, "/EXPORT:RestoreMediaSense=_AheadLib_RestoreMediaSense,@254")
#pragma comment(linker, "/EXPORT:SendARP=_AheadLib_SendARP,@255")
#pragma comment(linker, "/EXPORT:SetAdapterIpAddress=_AheadLib_SetAdapterIpAddress,@256")
#pragma comment(linker, "/EXPORT:SetCurrentThreadCompartmentId=_AheadLib_SetCurrentThreadCompartmentId,@257")
#pragma comment(linker, "/EXPORT:SetCurrentThreadCompartmentScope=_AheadLib_SetCurrentThreadCompartmentScope,@258")
#pragma comment(linker, "/EXPORT:SetIfEntry=_AheadLib_SetIfEntry,@259")
#pragma comment(linker, "/EXPORT:SetIpForwardEntry2=_AheadLib_SetIpForwardEntry2,@260")
#pragma comment(linker, "/EXPORT:SetIpForwardEntry=_AheadLib_SetIpForwardEntry,@261")
#pragma comment(linker, "/EXPORT:SetIpInterfaceEntry=_AheadLib_SetIpInterfaceEntry,@262")
#pragma comment(linker, "/EXPORT:SetIpNetEntry2=_AheadLib_SetIpNetEntry2,@263")
#pragma comment(linker, "/EXPORT:SetIpNetEntry=_AheadLib_SetIpNetEntry,@264")
#pragma comment(linker, "/EXPORT:SetIpStatistics=_AheadLib_SetIpStatistics,@265")
#pragma comment(linker, "/EXPORT:SetIpStatisticsEx=_AheadLib_SetIpStatisticsEx,@266")
#pragma comment(linker, "/EXPORT:SetIpTTL=_AheadLib_SetIpTTL,@267")
#pragma comment(linker, "/EXPORT:SetJobCompartmentId=_AheadLib_SetJobCompartmentId,@268")
#pragma comment(linker, "/EXPORT:SetNetworkInformation=_AheadLib_SetNetworkInformation,@269")
#pragma comment(linker, "/EXPORT:SetPerTcp6ConnectionEStats=_AheadLib_SetPerTcp6ConnectionEStats,@270")
#pragma comment(linker, "/EXPORT:SetPerTcp6ConnectionStats=_AheadLib_SetPerTcp6ConnectionStats,@271")
#pragma comment(linker, "/EXPORT:SetPerTcpConnectionEStats=_AheadLib_SetPerTcpConnectionEStats,@272")
#pragma comment(linker, "/EXPORT:SetPerTcpConnectionStats=_AheadLib_SetPerTcpConnectionStats,@273")
#pragma comment(linker, "/EXPORT:SetSessionCompartmentId=_AheadLib_SetSessionCompartmentId,@274")
#pragma comment(linker, "/EXPORT:SetTcpEntry=_AheadLib_SetTcpEntry,@275")
#pragma comment(linker, "/EXPORT:SetUnicastIpAddressEntry=_AheadLib_SetUnicastIpAddressEntry,@276")
#pragma comment(linker, "/EXPORT:UnenableRouter=_AheadLib_UnenableRouter,@277")
#pragma comment(linker, "/EXPORT:do_echo_rep=_AheadLib_do_echo_rep,@278")
#pragma comment(linker, "/EXPORT:do_echo_req=_AheadLib_do_echo_req,@279")
#pragma comment(linker, "/EXPORT:if_indextoname=_AheadLib_if_indextoname,@280")
#pragma comment(linker, "/EXPORT:if_nametoindex=_AheadLib_if_nametoindex,@281")
#pragma comment(linker, "/EXPORT:register_icmp=_AheadLib_register_icmp,@282")
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 宏定义
#define EXTERNC extern "C"
#define NAKED __declspec(naked)
#define EXPORT __declspec(dllexport)

#define ALCPP EXPORT NAKED
#define ALSTD EXTERNC EXPORT NAKED void __stdcall
#define ALCFAST EXTERNC EXPORT NAKED void __fastcall
#define ALCDECL EXTERNC NAKED void __cdecl
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// AheadLib 命名空间
namespace AheadLib
{
	HMODULE m_hModule = NULL;	// 原始模块句柄
	DWORD m_dwReturn[282] = { 0 };	// 原始函数返回地址


	// 加载原始模块
	inline BOOL WINAPI Load()
	{
		TCHAR tzPath[MAX_PATH];
		TCHAR tzTemp[MAX_PATH * 2];

		GetSystemDirectory(tzPath, MAX_PATH);
		lstrcat(tzPath, TEXT("\\IPHLPAPI"));
		m_hModule = LoadLibrary(tzPath);
		if (m_hModule == NULL)
		{
			wsprintf(tzTemp, TEXT("无法加载 %s，程序无法正常运行。"), tzPath);
			MessageBox(NULL, tzTemp, TEXT("AheadLib"), MB_ICONSTOP);
		}

		return (m_hModule != NULL);
	}

	// 释放原始模块
	inline VOID WINAPI Free()
	{
		if (m_hModule)
		{
			FreeLibrary(m_hModule);
		}
	}

	// 获取原始函数地址
	FARPROC WINAPI GetAddress(PCSTR pszProcName)
	{
		FARPROC fpAddress;
		WCHAR szProcName[16];
		TCHAR tzTemp[MAX_PATH];

		if (m_hModule == NULL)
		{
			if (Load() == FALSE)
			{
				ExitProcess(-1);
			}
		}

		fpAddress = GetProcAddress(m_hModule, pszProcName);
		if (fpAddress == NULL)
		{
			if (HIWORD(pszProcName) == 0)
			{
				wsprintf(szProcName, L"%d", pszProcName);
				//pszProcName = szProcName;
			}

			wsprintf(tzTemp, TEXT("无法找到函数 %hs，程序无法正常运行。"), pszProcName);
			MessageBox(NULL, tzTemp, TEXT("AheadLib"), MB_ICONSTOP);
			ExitProcess(-2);
		}

		return fpAddress;
	}
}
using namespace AheadLib;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 入口函数
BOOL WINAPI DllMain(HMODULE hModule, DWORD dwReason, PVOID pvReserved)
{
	if (dwReason == DLL_PROCESS_ATTACH)
	{
		DisableThreadLibraryCalls(hModule);
		for (INT i = 0; i < sizeof(m_dwReturn) / sizeof(DWORD); i++)
		{
			m_dwReturn[i] = TlsAlloc();
		}
		hook();
	}
	else if (dwReason == DLL_PROCESS_DETACH)
	{
		for (INT i = 0; i < sizeof(m_dwReturn) / sizeof(DWORD); i++)
		{
			TlsFree(m_dwReturn[i]);
		}

		Free();
	}

	return TRUE;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_AddIPAddress(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[0 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("AddIPAddress")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[0 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_AllocateAndGetInterfaceInfoFromStack(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[1 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("AllocateAndGetInterfaceInfoFromStack")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[1 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_AllocateAndGetIpAddrTableFromStack(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[2 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("AllocateAndGetIpAddrTableFromStack")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[2 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_CancelIPChangeNotify(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[3 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("CancelIPChangeNotify")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[3 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_CancelMibChangeNotify2(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[4 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("CancelMibChangeNotify2")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[4 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_CloseCompartment(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[5 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("CloseCompartment")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[5 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_CloseGetIPPhysicalInterfaceForDestination(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[6 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("CloseGetIPPhysicalInterfaceForDestination")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[6 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_ConvertCompartmentGuidToId(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[7 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("ConvertCompartmentGuidToId")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[7 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_ConvertCompartmentIdToGuid(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[8 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("ConvertCompartmentIdToGuid")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[8 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_ConvertGuidToStringA(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[9 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("ConvertGuidToStringA")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[9 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_ConvertGuidToStringW(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[10 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("ConvertGuidToStringW")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[10 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_ConvertInterfaceAliasToLuid(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[11 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("ConvertInterfaceAliasToLuid")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[11 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_ConvertInterfaceGuidToLuid(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[12 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("ConvertInterfaceGuidToLuid")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[12 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_ConvertInterfaceIndexToLuid(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[13 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("ConvertInterfaceIndexToLuid")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[13 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_ConvertInterfaceLuidToAlias(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[14 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("ConvertInterfaceLuidToAlias")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[14 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_ConvertInterfaceLuidToGuid(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[15 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("ConvertInterfaceLuidToGuid")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[15 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_ConvertInterfaceLuidToIndex(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[16 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("ConvertInterfaceLuidToIndex")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[16 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_ConvertInterfaceLuidToNameA(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[17 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("ConvertInterfaceLuidToNameA")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[17 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_ConvertInterfaceLuidToNameW(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[18 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("ConvertInterfaceLuidToNameW")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[18 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_ConvertInterfaceNameToLuidA(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[19 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("ConvertInterfaceNameToLuidA")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[19 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_ConvertInterfaceNameToLuidW(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[20 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("ConvertInterfaceNameToLuidW")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[20 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_ConvertInterfacePhysicalAddressToLuid(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[21 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("ConvertInterfacePhysicalAddressToLuid")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[21 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_ConvertIpv4MaskToLength(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[22 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("ConvertIpv4MaskToLength")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[22 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_ConvertLengthToIpv4Mask(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[23 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("ConvertLengthToIpv4Mask")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[23 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_ConvertRemoteInterfaceAliasToLuid(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[24 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("ConvertRemoteInterfaceAliasToLuid")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[24 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_ConvertRemoteInterfaceGuidToLuid(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[25 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("ConvertRemoteInterfaceGuidToLuid")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[25 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_ConvertRemoteInterfaceIndexToLuid(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[26 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("ConvertRemoteInterfaceIndexToLuid")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[26 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_ConvertRemoteInterfaceLuidToAlias(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[27 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("ConvertRemoteInterfaceLuidToAlias")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[27 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_ConvertRemoteInterfaceLuidToGuid(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[28 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("ConvertRemoteInterfaceLuidToGuid")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[28 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_ConvertRemoteInterfaceLuidToIndex(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[29 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("ConvertRemoteInterfaceLuidToIndex")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[29 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_ConvertStringToGuidA(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[30 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("ConvertStringToGuidA")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[30 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_ConvertStringToGuidW(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[31 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("ConvertStringToGuidW")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[31 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_ConvertStringToInterfacePhysicalAddress(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[32 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("ConvertStringToInterfacePhysicalAddress")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[32 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_CreateAnycastIpAddressEntry(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[33 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("CreateAnycastIpAddressEntry")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[33 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_CreateCompartment(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[34 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("CreateCompartment")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[34 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_CreateIpForwardEntry2(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[35 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("CreateIpForwardEntry2")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[35 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_CreateIpForwardEntry(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[36 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("CreateIpForwardEntry")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[36 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_CreateIpNetEntry2(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[37 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("CreateIpNetEntry2")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[37 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_CreateIpNetEntry(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[38 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("CreateIpNetEntry")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[38 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_CreatePersistentTcpPortReservation(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[39 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("CreatePersistentTcpPortReservation")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[39 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_CreatePersistentUdpPortReservation(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[40 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("CreatePersistentUdpPortReservation")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[40 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_CreateProxyArpEntry(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[41 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("CreateProxyArpEntry")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[41 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_CreateSortedAddressPairs(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[42 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("CreateSortedAddressPairs")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[42 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_CreateUnicastIpAddressEntry(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[43 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("CreateUnicastIpAddressEntry")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[43 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_DeleteAnycastIpAddressEntry(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[44 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("DeleteAnycastIpAddressEntry")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[44 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_DeleteCompartment(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[45 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("DeleteCompartment")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[45 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_DeleteIPAddress(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[46 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("DeleteIPAddress")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[46 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_DeleteIpForwardEntry2(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[47 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("DeleteIpForwardEntry2")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[47 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_DeleteIpForwardEntry(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[48 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("DeleteIpForwardEntry")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[48 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_DeleteIpNetEntry2(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[49 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("DeleteIpNetEntry2")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[49 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_DeleteIpNetEntry(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[50 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("DeleteIpNetEntry")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[50 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_DeletePersistentTcpPortReservation(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[51 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("DeletePersistentTcpPortReservation")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[51 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_DeletePersistentUdpPortReservation(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[52 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("DeletePersistentUdpPortReservation")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[52 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_DeleteProxyArpEntry(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[53 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("DeleteProxyArpEntry")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[53 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_DeleteUnicastIpAddressEntry(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[54 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("DeleteUnicastIpAddressEntry")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[54 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_DisableMediaSense(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[55 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("DisableMediaSense")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[55 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_EnableRouter(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[56 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("EnableRouter")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[56 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_FlushIpNetTable2(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[57 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("FlushIpNetTable2")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[57 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_FlushIpNetTable(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[58 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("FlushIpNetTable")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[58 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_FlushIpPathTable(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[59 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("FlushIpPathTable")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[59 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_FreeMibTable(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[60 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("FreeMibTable")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[60 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetAdapterIndex(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[61 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetAdapterIndex")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[61 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetAdapterOrderMap(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[62 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetAdapterOrderMap")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[62 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetAdaptersAddresses(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[63 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetAdaptersAddresses")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[63 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetAdaptersInfo(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[64 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetAdaptersInfo")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[64 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetAnycastIpAddressEntry(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[65 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetAnycastIpAddressEntry")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[65 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetAnycastIpAddressTable(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[66 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetAnycastIpAddressTable")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[66 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetBestInterface(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[67 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetBestInterface")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[67 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetBestInterfaceEx(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[68 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetBestInterfaceEx")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[68 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetBestRoute2(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[69 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetBestRoute2")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[69 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetBestRoute(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[70 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetBestRoute")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[70 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetCurrentThreadCompartmentId(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[71 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetCurrentThreadCompartmentId")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[71 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetCurrentThreadCompartmentScope(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[72 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetCurrentThreadCompartmentScope")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[72 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetDefaultCompartmentId(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[73 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetDefaultCompartmentId")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[73 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetExtendedTcpTable(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[74 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetExtendedTcpTable")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[74 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetExtendedUdpTable(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[75 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetExtendedUdpTable")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[75 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetFriendlyIfIndex(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[76 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetFriendlyIfIndex")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[76 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetIcmpStatistics(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[77 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetIcmpStatistics")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[77 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetIcmpStatisticsEx(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[78 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetIcmpStatisticsEx")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[78 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetIfEntry2(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[79 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetIfEntry2")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[79 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetIfEntry2Ex(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[80 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetIfEntry2Ex")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[80 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetIfEntry(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[81 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetIfEntry")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[81 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetIfStackTable(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[82 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetIfStackTable")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[82 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetIfTable2(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[83 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetIfTable2")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[83 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetIfTable2Ex(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[84 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetIfTable2Ex")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[84 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetIfTable(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[85 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetIfTable")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[85 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetInterfaceCompartmentId(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[86 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetInterfaceCompartmentId")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[86 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetInterfaceInfo(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[87 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetInterfaceInfo")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[87 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetInvertedIfStackTable(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[88 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetInvertedIfStackTable")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[88 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetIpAddrTable(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[89 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetIpAddrTable")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[89 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetIpErrorString(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[90 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetIpErrorString")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[90 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetIpForwardEntry2(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[91 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetIpForwardEntry2")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[91 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetIpForwardTable2(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[92 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetIpForwardTable2")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[92 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetIpForwardTable(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[93 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetIpForwardTable")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[93 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetIpInterfaceEntry(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[94 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetIpInterfaceEntry")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[94 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetIpInterfaceTable(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[95 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetIpInterfaceTable")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[95 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetIpNetEntry2(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[96 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetIpNetEntry2")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[96 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetIpNetTable2(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[97 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetIpNetTable2")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[97 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetIpNetTable(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[98 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetIpNetTable")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[98 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetIpNetworkConnectionBandwidthEstimates(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[99 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetIpNetworkConnectionBandwidthEstimates")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[99 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetIpPathEntry(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[100 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetIpPathEntry")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[100 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetIpPathTable(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[101 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetIpPathTable")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[101 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetIpStatistics(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[102 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetIpStatistics")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[102 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetIpStatisticsEx(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[103 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetIpStatisticsEx")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[103 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetJobCompartmentId(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[104 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetJobCompartmentId")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[104 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetMulticastIpAddressEntry(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[105 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetMulticastIpAddressEntry")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[105 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetMulticastIpAddressTable(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[106 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetMulticastIpAddressTable")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[106 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetNetworkInformation(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[107 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetNetworkInformation")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[107 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetNetworkParams(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[108 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetNetworkParams")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[108 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetNumberOfInterfaces(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[109 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetNumberOfInterfaces")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[109 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetOwnerModuleFromPidAndInfo(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[110 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetOwnerModuleFromPidAndInfo")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[110 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetOwnerModuleFromTcp6Entry(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[111 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetOwnerModuleFromTcp6Entry")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[111 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetOwnerModuleFromTcpEntry(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[112 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetOwnerModuleFromTcpEntry")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[112 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetOwnerModuleFromUdp6Entry(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[113 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetOwnerModuleFromUdp6Entry")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[113 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetOwnerModuleFromUdpEntry(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[114 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetOwnerModuleFromUdpEntry")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[114 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetPerAdapterInfo(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[115 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetPerAdapterInfo")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[115 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetPerTcp6ConnectionEStats(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[116 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetPerTcp6ConnectionEStats")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[116 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetPerTcp6ConnectionStats(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[117 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetPerTcp6ConnectionStats")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[117 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetPerTcpConnectionEStats(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[118 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetPerTcpConnectionEStats")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[118 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetPerTcpConnectionStats(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[119 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetPerTcpConnectionStats")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[119 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetRTTAndHopCount(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[120 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetRTTAndHopCount")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[120 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetSessionCompartmentId(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[121 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetSessionCompartmentId")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[121 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetTcp6Table2(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[122 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetTcp6Table2")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[122 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetTcp6Table(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[123 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetTcp6Table")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[123 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetTcpStatistics(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[124 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetTcpStatistics")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[124 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetTcpStatisticsEx2(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[125 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetTcpStatisticsEx2")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[125 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetTcpStatisticsEx(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[126 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetTcpStatisticsEx")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[126 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetTcpTable2(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[127 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetTcpTable2")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[127 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetTcpTable(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[128 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetTcpTable")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[128 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetTeredoPort(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[129 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetTeredoPort")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[129 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetUdp6Table(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[130 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetUdp6Table")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[130 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetUdpStatistics(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[131 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetUdpStatistics")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[131 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetUdpStatisticsEx2(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[132 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetUdpStatisticsEx2")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[132 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetUdpStatisticsEx(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[133 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetUdpStatisticsEx")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[133 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetUdpTable(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[134 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetUdpTable")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[134 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetUniDirectionalAdapterInfo(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[135 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetUniDirectionalAdapterInfo")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[135 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetUnicastIpAddressEntry(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[136 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetUnicastIpAddressEntry")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[136 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetUnicastIpAddressTable(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[137 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetUnicastIpAddressTable")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[137 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_GetWPAOACSupportLevel(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[138 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("GetWPAOACSupportLevel")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[138 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_Icmp6CreateFile(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[139 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("Icmp6CreateFile")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[139 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_Icmp6ParseReplies(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[140 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("Icmp6ParseReplies")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[140 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_Icmp6SendEcho2(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[141 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("Icmp6SendEcho2")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[141 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_IcmpCloseHandle(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[142 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("IcmpCloseHandle")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[142 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_IcmpCreateFile(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[143 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("IcmpCreateFile")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[143 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_IcmpParseReplies(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[144 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("IcmpParseReplies")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[144 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_IcmpSendEcho2(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[145 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("IcmpSendEcho2")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[145 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_IcmpSendEcho2Ex(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[146 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("IcmpSendEcho2Ex")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[146 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_IcmpSendEcho(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[147 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("IcmpSendEcho")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[147 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InitializeCompartmentEntry(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[148 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InitializeCompartmentEntry")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[148 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InitializeIpForwardEntry(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[149 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InitializeIpForwardEntry")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[149 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InitializeIpInterfaceEntry(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[150 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InitializeIpInterfaceEntry")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[150 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InitializeUnicastIpAddressEntry(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[151 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InitializeUnicastIpAddressEntry")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[151 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalCleanupPersistentStore(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[152 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalCleanupPersistentStore")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[152 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalCreateAnycastIpAddressEntry(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[153 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalCreateAnycastIpAddressEntry")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[153 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalCreateIpForwardEntry2(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[154 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalCreateIpForwardEntry2")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[154 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalCreateIpForwardEntry(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[155 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalCreateIpForwardEntry")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[155 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalCreateIpNetEntry2(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[156 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalCreateIpNetEntry2")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[156 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalCreateIpNetEntry(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[157 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalCreateIpNetEntry")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[157 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalCreateUnicastIpAddressEntry(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[158 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalCreateUnicastIpAddressEntry")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[158 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalDeleteAnycastIpAddressEntry(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[159 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalDeleteAnycastIpAddressEntry")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[159 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalDeleteIpForwardEntry2(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[160 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalDeleteIpForwardEntry2")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[160 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalDeleteIpForwardEntry(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[161 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalDeleteIpForwardEntry")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[161 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalDeleteIpNetEntry2(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[162 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalDeleteIpNetEntry2")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[162 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalDeleteIpNetEntry(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[163 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalDeleteIpNetEntry")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[163 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalDeleteUnicastIpAddressEntry(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[164 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalDeleteUnicastIpAddressEntry")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[164 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalFindInterfaceByAddress(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[165 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalFindInterfaceByAddress")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[165 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalGetAnycastIpAddressEntry(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[166 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalGetAnycastIpAddressEntry")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[166 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalGetAnycastIpAddressTable(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[167 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalGetAnycastIpAddressTable")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[167 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalGetBoundTcp6EndpointTable(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[168 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalGetBoundTcp6EndpointTable")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[168 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalGetBoundTcpEndpointTable(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[169 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalGetBoundTcpEndpointTable")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[169 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalGetForwardIpTable2(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[170 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalGetForwardIpTable2")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[170 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalGetIPPhysicalInterfaceForDestination(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[171 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalGetIPPhysicalInterfaceForDestination")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[171 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalGetIfEntry2(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[172 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalGetIfEntry2")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[172 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalGetIfTable2(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[173 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalGetIfTable2")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[173 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalGetIfTable(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[174 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalGetIfTable")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[174 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalGetIpAddrTable(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[175 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalGetIpAddrTable")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[175 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalGetIpForwardEntry2(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[176 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalGetIpForwardEntry2")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[176 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalGetIpForwardTable(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[177 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalGetIpForwardTable")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[177 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalGetIpInterfaceEntry(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[178 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalGetIpInterfaceEntry")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[178 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalGetIpInterfaceTable(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[179 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalGetIpInterfaceTable")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[179 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalGetIpNetEntry2(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[180 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalGetIpNetEntry2")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[180 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalGetIpNetTable2(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[181 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalGetIpNetTable2")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[181 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalGetIpNetTable(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[182 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalGetIpNetTable")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[182 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalGetMulticastIpAddressEntry(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[183 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalGetMulticastIpAddressEntry")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[183 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalGetMulticastIpAddressTable(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[184 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalGetMulticastIpAddressTable")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[184 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalGetRtcSlotInformation(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[185 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalGetRtcSlotInformation")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[185 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalGetTcp6Table2(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[186 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalGetTcp6Table2")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[186 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalGetTcp6TableWithOwnerModule(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[187 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalGetTcp6TableWithOwnerModule")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[187 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalGetTcp6TableWithOwnerPid(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[188 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalGetTcp6TableWithOwnerPid")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[188 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalGetTcpTable2(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[189 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalGetTcpTable2")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[189 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalGetTcpTable(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[190 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalGetTcpTable")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[190 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalGetTcpTableEx(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[191 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalGetTcpTableEx")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[191 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalGetTcpTableWithOwnerModule(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[192 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalGetTcpTableWithOwnerModule")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[192 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalGetTcpTableWithOwnerPid(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[193 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalGetTcpTableWithOwnerPid")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[193 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalGetTunnelPhysicalAdapter(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[194 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalGetTunnelPhysicalAdapter")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[194 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalGetUdp6TableWithOwnerModule(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[195 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalGetUdp6TableWithOwnerModule")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[195 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalGetUdp6TableWithOwnerPid(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[196 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalGetUdp6TableWithOwnerPid")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[196 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalGetUdpTable(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[197 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalGetUdpTable")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[197 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalGetUdpTableEx(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[198 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalGetUdpTableEx")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[198 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalGetUdpTableWithOwnerModule(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[199 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalGetUdpTableWithOwnerModule")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[199 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalGetUdpTableWithOwnerPid(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[200 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalGetUdpTableWithOwnerPid")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[200 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalGetUnicastIpAddressEntry(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[201 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalGetUnicastIpAddressEntry")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[201 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalGetUnicastIpAddressTable(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[202 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalGetUnicastIpAddressTable")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[202 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalIcmpCreateFileEx(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[203 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalIcmpCreateFileEx")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[203 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalSetIfEntry(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[204 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalSetIfEntry")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[204 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalSetIpForwardEntry2(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[205 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalSetIpForwardEntry2")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[205 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalSetIpForwardEntry(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[206 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalSetIpForwardEntry")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[206 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalSetIpInterfaceEntry(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[207 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalSetIpInterfaceEntry")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[207 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalSetIpNetEntry2(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[208 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalSetIpNetEntry2")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[208 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalSetIpNetEntry(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[209 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalSetIpNetEntry")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[209 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalSetIpStats(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[210 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalSetIpStats")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[210 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalSetTcpEntry(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[211 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalSetTcpEntry")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[211 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalSetTeredoPort(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[212 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalSetTeredoPort")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[212 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_InternalSetUnicastIpAddressEntry(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[213 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("InternalSetUnicastIpAddressEntry")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[213 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_IpReleaseAddress(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[214 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("IpReleaseAddress")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[214 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_IpRenewAddress(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[215 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("IpRenewAddress")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[215 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_LookupPersistentTcpPortReservation(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[216 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("LookupPersistentTcpPortReservation")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[216 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_LookupPersistentUdpPortReservation(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[217 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("LookupPersistentUdpPortReservation")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[217 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_NTPTimeToNTFileTime(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[218 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("NTPTimeToNTFileTime")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[218 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_NTTimeToNTPTime(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[219 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("NTTimeToNTPTime")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[219 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_NhGetGuidFromInterfaceName(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[220 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("NhGetGuidFromInterfaceName")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[220 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_NhGetInterfaceDescriptionFromGuid(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[221 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("NhGetInterfaceDescriptionFromGuid")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[221 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_NhGetInterfaceNameFromDeviceGuid(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[222 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("NhGetInterfaceNameFromDeviceGuid")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[222 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_NhGetInterfaceNameFromGuid(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[223 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("NhGetInterfaceNameFromGuid")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[223 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_NhpAllocateAndGetInterfaceInfoFromStack(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[224 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("NhpAllocateAndGetInterfaceInfoFromStack")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[224 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_NotifyAddrChange(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[225 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("NotifyAddrChange")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[225 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_NotifyCompartmentChange(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[226 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("NotifyCompartmentChange")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[226 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_NotifyIpInterfaceChange(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[227 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("NotifyIpInterfaceChange")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[227 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_NotifyRouteChange2(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[228 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("NotifyRouteChange2")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[228 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_NotifyRouteChange(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[229 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("NotifyRouteChange")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[229 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_NotifyStableUnicastIpAddressTable(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[230 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("NotifyStableUnicastIpAddressTable")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[230 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_NotifyTeredoPortChange(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[231 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("NotifyTeredoPortChange")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[231 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_NotifyUnicastIpAddressChange(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[232 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("NotifyUnicastIpAddressChange")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[232 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_OpenCompartment(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[233 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("OpenCompartment")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[233 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_ParseNetworkString(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[234 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("ParseNetworkString")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[234 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALSTD PfAddFiltersToInterface(long, long, long, long, long, long)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[235 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("_PfAddFiltersToInterface@24")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[235 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALSTD PfAddGlobalFilterToInterface(long, long)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[236 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("_PfAddGlobalFilterToInterface@8")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[236 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALSTD PfBindInterfaceToIPAddress(long, long, long)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[237 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("_PfBindInterfaceToIPAddress@12")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[237 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALSTD PfBindInterfaceToIndex(long, long, long, long)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[238 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("_PfBindInterfaceToIndex@16")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[238 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALSTD PfCreateInterface(long, long, long, long, long, long)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[239 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("_PfCreateInterface@24")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[239 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALSTD PfDeleteInterface(long)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[240 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("_PfDeleteInterface@4")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[240 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALSTD PfDeleteLog(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[241 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("_PfDeleteLog@0")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[241 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALSTD PfGetInterfaceStatistics(long, long, long, long)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[242 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("_PfGetInterfaceStatistics@16")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[242 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALSTD PfMakeLog(long)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[243 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("_PfMakeLog@4")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[243 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALSTD PfRebindFilters(long, long)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[244 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("_PfRebindFilters@8")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[244 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALSTD PfRemoveFilterHandles(long, long, long)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[245 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("_PfRemoveFilterHandles@12")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[245 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALSTD PfRemoveFiltersFromInterface(long, long, long, long, long)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[246 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("_PfRemoveFiltersFromInterface@20")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[246 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALSTD PfRemoveGlobalFilterFromInterface(long, long)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[247 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("_PfRemoveGlobalFilterFromInterface@8")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[247 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALSTD PfSetLogBuffer(long, long, long, long, long, long, long)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[248 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("_PfSetLogBuffer@28")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[248 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALSTD PfTestPacket(long, long, long, long, long)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[249 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("_PfTestPacket@20")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[249 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALSTD PfUnBindInterface(long)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[250 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("_PfUnBindInterface@4")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[250 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_ResolveIpNetEntry2(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[251 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("ResolveIpNetEntry2")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[251 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_ResolveNeighbor(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[252 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("ResolveNeighbor")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[252 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_RestoreMediaSense(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[253 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("RestoreMediaSense")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[253 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_SendARP(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[254 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("SendARP")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[254 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_SetAdapterIpAddress(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[255 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("SetAdapterIpAddress")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[255 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_SetCurrentThreadCompartmentId(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[256 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("SetCurrentThreadCompartmentId")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[256 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_SetCurrentThreadCompartmentScope(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[257 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("SetCurrentThreadCompartmentScope")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[257 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_SetIfEntry(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[258 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("SetIfEntry")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[258 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_SetIpForwardEntry2(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[259 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("SetIpForwardEntry2")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[259 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_SetIpForwardEntry(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[260 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("SetIpForwardEntry")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[260 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_SetIpInterfaceEntry(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[261 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("SetIpInterfaceEntry")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[261 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_SetIpNetEntry2(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[262 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("SetIpNetEntry2")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[262 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_SetIpNetEntry(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[263 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("SetIpNetEntry")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[263 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_SetIpStatistics(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[264 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("SetIpStatistics")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[264 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_SetIpStatisticsEx(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[265 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("SetIpStatisticsEx")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[265 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_SetIpTTL(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[266 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("SetIpTTL")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[266 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_SetJobCompartmentId(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[267 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("SetJobCompartmentId")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[267 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_SetNetworkInformation(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[268 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("SetNetworkInformation")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[268 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_SetPerTcp6ConnectionEStats(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[269 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("SetPerTcp6ConnectionEStats")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[269 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_SetPerTcp6ConnectionStats(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[270 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("SetPerTcp6ConnectionStats")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[270 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_SetPerTcpConnectionEStats(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[271 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("SetPerTcpConnectionEStats")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[271 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_SetPerTcpConnectionStats(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[272 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("SetPerTcpConnectionStats")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[272 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_SetSessionCompartmentId(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[273 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("SetSessionCompartmentId")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[273 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_SetTcpEntry(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[274 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("SetTcpEntry")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[274 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_SetUnicastIpAddressEntry(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[275 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("SetUnicastIpAddressEntry")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[275 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_UnenableRouter(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[276 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("UnenableRouter")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[276 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_do_echo_rep(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[277 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("do_echo_rep")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[277 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_do_echo_req(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[278 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("do_echo_req")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[278 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_if_indextoname(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[279 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("if_indextoname")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[279 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_if_nametoindex(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[280 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("if_nametoindex")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[280 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_register_icmp(void)
{
	// 保存返回地址到 TLS
	__asm PUSH m_dwReturn[281 * TYPE long];
	__asm CALL DWORD PTR[TlsSetValue];

	// 调用原始函数
	GetAddress("register_icmp")();

	// 获取返回地址并返回
	__asm PUSH EAX;
	__asm PUSH m_dwReturn[281 * TYPE long];
	__asm CALL DWORD PTR[TlsGetValue];
	__asm XCHG EAX, [ESP];
	__asm RET;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
