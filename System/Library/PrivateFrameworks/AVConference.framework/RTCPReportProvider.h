/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:27 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RTCPReportProvider <NSObject>
@optional
-(unsigned)getRTCPReportNTPTimeMiddle32ForReportId:(unsigned char)arg1;
-(unsigned)getExtendedSequenceNumberForSequenceNumber:(unsigned short)arg1;

@required
-(BOOL)generateReceptionReportList:(RTCP_RECEPTION_REPORT*)arg1 reportCount:(char*)arg2;

@end

