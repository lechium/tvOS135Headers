/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:26 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/PSISearchableTerm.h>

@class NSString;

@interface PSISynonym : NSObject <NSCopying, PSISearchableTerm> {

	NSString* _text;
	unsigned long long _category;
	unsigned long long _owningGroupId;

}

@property (nonatomic,readonly) NSString * text;                               //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) unsigned long long category;                   //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) unsigned long long owningGroupId;              //@synthesize owningGroupId=_owningGroupId - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)identifier;
-(unsigned long long)category;
-(NSString *)text;
-(unsigned long long)owningGroupId;
-(id)initWithText:(id)arg1 category:(unsigned long long)arg2 owningGroupId:(unsigned long long)arg3 ;
@end

