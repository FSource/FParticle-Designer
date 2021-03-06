#include <QtGlobal>
#include <assert.h>
#include "core/MpProject.h"
#include "core/MpParticleEffect.h"


MpProject::MpProject()
{
	m_curParticleEffect=NULL;
}


MpProject::~MpProject()
{
}


int MpProject::getClassType()
{
	return MP_PROJECT;
}

const char* MpProject::className()
{
	return "MpProject";
}


std::string MpProject::getName()
{
	return m_name;
}


void MpProject::setName(const char* name)
{
	m_name=std::string(name);
}


std::string MpProject::getDir()
{
	return m_dir;
}


void MpProject::setDir(const std::string& dir)
{
	m_dir=dir;
}

bool MpProject::hasParticleWithName(const char* name)
{
	int particle_nu=m_particleEffects.size();
	for(int i=0;i<particle_nu;i++)
	{
		if(m_particleEffects[i]->getName()==name)
		{
			return true;
		}
	}
	return false;
}


void MpProject::addParticleEffect(MpParticleEffect* ef) 
{
	m_particleEffects.push_back(ef);
	ef->setProject(this);
}

void MpProject::removeParticleEffect(MpParticleEffect* ef)
{
	std::vector<MpParticleEffect*>::iterator iter;
	for(iter=m_particleEffects.begin();iter!=m_particleEffects.end();++iter)
	{
		if(*iter==ef)
		{
			m_particleEffects.erase(iter);
			return ;
		}
	}
	assert(0);
}

int MpProject::getParticleEffectNu()
{
	return m_particleEffects.size();
}

int MpProject::getParticleEffectPos(MpParticleEffect* ef)
{
	int particle_nu=m_particleEffects.size();
	for(int i=0;i<particle_nu;i++)
	{
		if(m_particleEffects[i]==ef)
		{
			return i;
		}
	}
	return -1;
}

MpParticleEffect* MpProject::getParticleEffect(int index)
{
	if(index>=m_particleEffects.size())
	{
        qDebug("Outof Range(index=%d,size=%d)",index,m_particleEffects.size());
        return NULL;
	}

	return m_particleEffects[index];
}



MpParticleEffect* MpProject::getCurParticleEffect()
{
	return m_curParticleEffect;
}


void MpProject::setCurParticleEffect(MpParticleEffect* effect)
{
	m_curParticleEffect=effect;
}







