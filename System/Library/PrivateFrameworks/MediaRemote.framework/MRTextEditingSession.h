/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:22 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString, MRTextEditingAttributes;

@interface MRTextEditingSession : NSObject <NSMutableCopying> {

	NSString* _text;
	BOOL _editing;
	MRTextEditingAttributes* _attributes;
	unsigned long long _uniqueIdentifier;

}

@property (nonatomic,readonly) unsigned long long uniqueIdentifier;               //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * text;                                   //@synthesize text=_text - In the implementation block
@property (getter=isEditing,nonatomic,readonly) BOOL editing;                     //@synthesize editing=_editing - In the implementation block
@property (nonatomic,readonly) MRTextEditingAttributes * attributes;              //@synthesize attributes=_attributes - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(unsigned long long)uniqueIdentifier;
-(MRTextEditingAttributes *)attributes;
-(NSString *)text;
-(BOOL)isEditing;
-(id)_copyWithZone:(NSZone*)arg1 usingConcreteClass:(Class)arg2 ;
-(id)initWithText:(id)arg1 attributes:(id)arg2 ;
@end
