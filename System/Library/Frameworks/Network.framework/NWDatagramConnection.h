/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Network/NWConnection.h>

@interface NWDatagramConnection : NWConnection
+(id)connectionWithConnectedSocket:(int)arg1 ;
-(BOOL)readDatagramsWithMinimumCount:(unsigned long long)arg1 maximumCount:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)writeDatagrams:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

