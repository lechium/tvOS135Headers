/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:15 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/_CFXNotificationRegistrationBase.h>

@interface _CFXNotificationRegistrationContainer : _CFXNotificationRegistrationBase {

	SCD_Struct_CF6* _children;

}
+(Class)childClass;
-(void)dealloc;
-(void)invalidate;
-(void)addChild:(id)arg1 ;
-(id)initWithParent:(id)arg1 childKeyCallbacks:(const SCD_Struct_CF2*)arg2 ;
-(id)initWithParent:(id)arg1 ;
-(void)resetChildren;
-(void)removeChild:(id)arg1 token:(unsigned long long)arg2 ;
-(BOOL)enumerate:(/*^block*/id)arg1 ;
@end

