/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:38 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PSSpecifierAction : NSObject <NSCopying> {

	/*^block*/id _getter;
	/*^block*/id _setter;

}

@property (nonatomic,copy) id getter;              //@synthesize getter=_getter - In the implementation block
@property (nonatomic,copy) id setter;              //@synthesize setter=_setter - In the implementation block
+(id)actionWithGetter:(/*^block*/id)arg1 setter:(/*^block*/id)arg2 ;
+(id)actionWithTarget:(id)arg1 getterSelector:(SEL)arg2 setterSelector:(SEL)arg3 ;
+(id)actionWithBoolDetailClass:(Class)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)getter;
-(id)setter;
-(void)setGetter:(id)arg1 ;
-(void)setSetter:(id)arg1 ;
@end
