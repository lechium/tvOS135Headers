/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:48 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MLModelTypeRegistry : NSObject
+(id)sharedInstance;
-(id)init;
-(Class)classForLoadingModelType:(int)arg1 ;
-(Class)classForLoadingModelType:(int)arg1 isUpdatable:(BOOL)arg2 ;
-(Class)classForCompilingModelType:(int)arg1 ;
@end

