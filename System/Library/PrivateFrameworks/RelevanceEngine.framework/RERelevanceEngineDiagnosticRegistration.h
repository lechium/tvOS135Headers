/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:06 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RESingleton.h>

@interface RERelevanceEngineDiagnosticRegistration : RESingleton {

	BOOL _supportsRegistration;

}
-(id)_init;
-(id)_defaultRegistrationDirectory;
-(id)_processesFileURL;
-(id)_allProcesses;
-(void)_accessEngineDataForProcess:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)checkinEngine:(id)arg1 ;
-(void)enumerateAvailableEngines:(/*^block*/id)arg1 ;
@end

