/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSFileSecurity.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface __NSFileSecurity : NSFileSecurity <NSCopying, NSSecureCoding> {

	filesecRef _filesec;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)__new:(filesecRef)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(filesecRef)_filesec;
-(BOOL)getOwner:(unsigned*)arg1 ;
-(BOOL)setOwner:(unsigned)arg1 ;
-(BOOL)getGroup:(unsigned*)arg1 ;
-(BOOL)setGroup:(unsigned)arg1 ;
-(BOOL)getMode:(unsigned short*)arg1 ;
-(BOOL)setMode:(unsigned short)arg1 ;
-(BOOL)getOwnerUUID:(unsigned char*)arg1 ;
-(BOOL)setOwnerUUID:(unsigned char)arg1 ;
-(BOOL)getGroupUUID:(unsigned char*)arg1 ;
-(BOOL)setGroupUUID:(unsigned char)arg1 ;
-(BOOL)copyAccessControlList:(acl*)arg1 ;
-(BOOL)setAccessControlList:(aclRef)arg1 ;
-(BOOL)clearProperties:(unsigned long long)arg1 ;
@end

