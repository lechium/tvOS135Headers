/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TimeSync/TSgPTPFDPtPPort.h>

@interface TSgPTPUnicastUDPv6PtPPort : TSgPTPFDPtPPort
+(id)diagnosticDescriptionForService:(unsigned)arg1 withIndent:(id)arg2 ;
+(id)iokitMatchingDictionaryForInterfaceName:(id)arg1 andIPv6Address:(char*)arg2 ;
-(void)dealloc;
-(id)initWithService:(unsigned)arg1 ;
-(int)portType;
-(id)initWithMatchingDictionary:(id)arg1 ;
-(id)_sourceAddressString;
-(id)_destinationAddressString;
-(id)initWithInterfaceName:(id)arg1 andIPv6Address:(char*)arg2 ;
@end

