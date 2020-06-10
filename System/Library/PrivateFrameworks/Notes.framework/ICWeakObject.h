/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:15 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notes/Notes-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ICWeakObject : NSObject <NSCopying> {

	id _object;
	unsigned long long _cachedHash;

}

@property (assign,nonatomic) unsigned long long cachedHash;              //@synthesize cachedHash=_cachedHash - In the implementation block
@property (nonatomic,__weak,readonly) id object;                         //@synthesize object=_object - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)object;
-(id)initWithObject:(id)arg1 ;
-(unsigned long long)cachedHash;
-(void)setCachedHash:(unsigned long long)arg1 ;
@end

