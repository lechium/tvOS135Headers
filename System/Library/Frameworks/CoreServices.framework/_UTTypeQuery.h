/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:10 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/_LSQuery.h>

@interface _UTTypeQuery : _LSQuery {

	unsigned long long _flags;
	void* _context;
	unsigned long long _propertyFlags;

}

@property (assign,setter=_setContext:,nonatomic) LSContext* _context; 
@property (assign,setter=_setPropertiesToResolve:,nonatomic) unsigned long long _propertiesToResolve; 
@property (assign,setter=_setResolveInactiveDeclarations:,nonatomic) BOOL _resolveInactiveDeclarations; 
+(id)typeQueryWithIdentifier:(id)arg1 ;
+(id)typeQueryWithTag:(id)arg1 ofClass:(id)arg2 conformsTo:(id)arg3 limit:(long long)arg4 ;
+(id)typeQueryForAllDeclaredIdentifiers;
+(id)typeQueryWithTag:(id)arg1 ofClass:(id)arg2 conformsTo:(id)arg3 ;
+(id)typeQueryWithDescendantsOfIdentifier:(id)arg1 searchDepthLimit:(unsigned long long)arg2 ;
+(void)_precacheTypesForIdentifiers:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)_setContext:(LSContext*)arg1 ;
-(id)_init;
-(id)resolve;
-(LSContext*)_context;
-(BOOL)_resolveInactiveDeclarations;
-(void)_setResolveInactiveDeclarations:(BOOL)arg1 ;
-(unsigned long long)_propertiesToResolve;
-(void)_setPropertiesToResolve:(unsigned long long)arg1 ;
@end

