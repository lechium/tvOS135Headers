/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:45 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSKeyedUnarchiver.h>

@class NSDictionary;

@interface UIStateRestorationKeyedUnarchiver : NSKeyedUnarchiver {

	NSDictionary* _defaultValues;

}
-(void)dealloc;
-(id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2 ;
-(id)decodeObjectForKey:(id)arg1 ;
-(id)decodeTopLevelObjectOfClasses:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(id)initForReadingWithData:(id)arg1 defaultValues:(id)arg2 requiresSecureCoding:(BOOL)arg3 ;
@end

