/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:30 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TVServices/TVServices-Structs.h>
@interface TVSProcessInfo : NSObject {

	SecTaskRef _currentTask;

}

@property (assign,nonatomic) SecTaskRef currentTask;              //@synthesize currentTask=_currentTask - In the implementation block
+(id)currentProcessInfo;
-(id)init;
-(void)dealloc;
-(id)valueForEntitlement:(id)arg1 ;
-(SecTaskRef)currentTask;
-(void)setCurrentTask:(SecTaskRef)arg1 ;
-(BOOL)boolValueForEntitlement:(id)arg1 ;
-(BOOL)valueForEntitlement:(id)arg1 containsObject:(id)arg2 ;
@end

