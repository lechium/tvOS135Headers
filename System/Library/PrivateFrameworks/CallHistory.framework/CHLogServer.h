/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:46 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallHistory/CallHistory-Structs.h>
#import <CallHistory/CHSynchronizable.h>

@interface CHLogServer : CHSynchronizable {

	unordered_map<const char *, os_log_s *, std::__1::hash<const char *>, std::__1::equal_to<const char *>, std::__1::allocator<std::__1::pair<const char *const, os_log_s *> > >* fLogHandles;

}
+(id)instance;
-(id)init;
-(os_log_sRef)logHandleForDomain:(const char*)arg1 ;
-(os_log_sRef)logHandleForDomainSync:(const char*)arg1 ;
-(void)createLogHandleForDomainSync:(const char*)arg1 ;
@end
